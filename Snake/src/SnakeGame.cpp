#include "../include/SnakeGame.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <chrono> //por causa do sleep
#include <thread> //por causa do sleep2
#include <sstream>
#include <string>
#include <vector>


using namespace std;
std::string file;

int SnakeGame::convertePraInteiro(std::string str){       
    int aux; 
    stringstream ss;  
    ss << str;  
    ss >> aux; 

    return aux;
}

SnakeGame::SnakeGame(std::string file_, std::string modo){
    choice = "";
    frameCount = 0;
    this->file = file_;
    this->modo = modo;
    initialize_game();
}
//coloquei pra abrir com a linha de comando

void SnakeGame::initialize_game(){
    //carrega o nivel ou os níveis
    
    ifstream levelFile(file);
    int lineCount = 0;
    string line;
    if(levelFile.is_open()){
        while(getline(levelFile, line)){ //pega cada linha do arquivo
            if(lineCount > 0 && lineCount <= informacoesJogo[0]){ //ignora a primeira linha já que ela contem informações que não são uteis para esse exemplo
                maze.push_back(line);
            }
            else if(lineCount == 0){
                string tokenString = line; //criei uma string e armazenei a primeira linha
                // as sub-strings separadas vão ser colocadas neste vetor
                vector<string> tokens; //criei um vector de string 
                // stream de strings de input inicializado com a string a ser separada
                istringstream tokenizer { tokenString };
                // variável de trabalho
                string token;
                // separa as string por espaço e coloca no vetor destino
                while (tokenizer >> token)
                 tokens.push_back(token);

                for(auto i : tokens){
                    informacoesJogo.push_back(convertePraInteiro(i));
    
                }

            }
            lineCount++;
            
        }
        if(lineCount <= 2){
            cout << "Arquivo sem labirinto, encerrando o programa..." << endl;
            exit(1);
        }
        else if(lineCount > informacoesJogo[0] + 1){
            cout << "existe outro lvl" << endl;
        }
        
        mazes.push_back(maze);
        printIntro();
        Snake sn(modo);
        snake.push_back(sn);
        Level lvl(informacoesJogo[0], informacoesJogo[1], informacoesJogo[2], maze);
        level.push_back(lvl);
        Player plr;
        player.push_back(plr);
        level[0].randomStart();
        level[0].adicionaCobra();
        level[0].foodRandomStart();
        level[0].adicionaComida();
        level[0].mostrarInterface();
    }

    else{
        cout <<"O arquivo não existe" << endl;
        exit(1);   
    }

    state = RUNNING;
}



void SnakeGame::process_actions(){
    //processa as entradas do jogador de acordo com o estado do jogo
    //nesse exemplo o jogo tem 3 estados, WAITING_USER, RUNNING e GAME_OVER.
    //no caso deste trabalho temos 2 tipos de entrada, uma que vem da classe Player, como resultado do processamento da IA
    //outra vem do próprio usuário na forma de uma entrada do teclado.
    switch(state){
        case WAITING_USER: //o jogo bloqueia aqui esperando o usuário digitar a escolha dele
            cin>>std::ws>>choice;
            break;
        default:
            //nada pra fazer aqui
            break;
    }
}

void SnakeGame::update(){
    //atualiza o estado do jogo de acordo com o resultado da chamada de "process_input"
    switch(state){
        case RUNNING:
            if(frameCount>0 && frameCount%10 == 0) //depois de 10 frames o jogo pergunta se o usuário quer continuar
                state = WAITING_USER;
            break;
        case WAITING_USER: //se o jogo estava esperando pelo usuário então ele testa qual a escolha que foi feita
            if(choice == "n"){
                state = GAME_OVER;
                game_over();
            }
            else if(choice == "s"){
                frameCount = 0;
                //pode fazer alguma coisa antes de fazer isso aqui
                state = RUNNING;
            }
            break;
        default:
            //nada pra fazer aqui
            break;
    }
   
}

/**
 * @brief função auxiliar para fazer o programa esperar por alguns milisegundos
 * @param ms a quantidade de segundos que o programa deve esperar
 */
void wait(int ms){
    this_thread::sleep_for(chrono::milliseconds(ms));
}

/**
 * @brief função auxiliar para limpar o terminal
 */
void clearScreen(){
//some C++ voodoo here ;D
#if defined _WIN32
    system("cls");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
#elif defined (__APPLE__)
    system("clear");
#endif
}

void SnakeGame::render(){
    clearScreen();
    switch(state){
        case RUNNING:
            level[0].mostrarLabirinto();
            break;
        case WAITING_USER:
            cout<<"Você quer continuar com o jogo? (s/n)"<<endl;
            break;
        case GAME_OVER:
            cout<<"O jogo terminou!"<<endl;
            break;
    }
    
    frameCount++;
}

void SnakeGame::game_over(){
    cout << "Saindo do jogo :( " << endl;
    exit(1);
}

void SnakeGame::loop(){
    while(state != GAME_OVER){
        process_actions();
        update();
        render();
        wait(1000);// espera 1 segundo entre cada frame
    }
}

 void SnakeGame::printIntro()
    {
        std::stringstream ss;
        ss <<   "*********************************************\n" <<
                "*                                           *\n" <<
                "*  ******  *     *  ******  ******  ******  *\n" <<
                "*  *       * *   *  *    *      *   *       *\n" <<
                "*  ******  *  *  *  * ** *    *     ****    *\n" <<
                "*       *  *   * *  *    *  *       *       *\n" <<
                "*  ******  *    **  *    *  ******  ******  *\n" <<
                "*                                           *\n" <<
                "*********************************************\n";

        std::cout << ss.str() << std::endl;
        cout << "Bem vindo ao Snaze!" << endl;
        cout << "Carregando nível..." << endl;
    
        wait(5000);
    }
