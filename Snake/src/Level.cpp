#include "../include/Level.h"
#include <iostream>
#include <vector>
using namespace std;
#include <time.h>
#include <random>


Level::Level(int alt, int larg, int com, std::vector<std::string> maze){
    if(alt <= 0 || larg <= 0 || com <= 0){
        cout << "Valores inválidos (menor igual a zero), labirinto rejeitado" << endl;
        exit(1);
    }
    if(alt > 100 || larg > 100 ){
        cout << "Valores inválidos (maior que 100), labirinto rejeitado" << endl;
        exit(1);
    }
    
    linhas = alt;   
    colunas = larg;
    comida = com;
    maze_ = maze;
 

}
void Level::mostrarLabirinto(){
    for(auto i : maze_){
        cout << i << endl;
    }
}

pair<int, int> Level::randomStart(){
    int aux = (rand() % (linhas - 3)) + 1;
    int aux2 = (rand() % (colunas - 3)) + 1;
    if(maze_[aux][aux2] != ' '){
        return randomStart();        
    }
    else{
       snakePos.first = aux;
       snakePos.second = aux2;
    }
    return snakePos;

}   

void Level::adicionaCobra(){
    if(maze_[snakePos.first+1][snakePos.second] == ' ')
        maze_[snakePos.first][snakePos.second] = '^';
    else if(maze_[snakePos.first-1][snakePos.second] == ' ')
        maze_[snakePos.first][snakePos.second] = 'v';
    else if(maze_[snakePos.first][snakePos.second+1] == ' ')
        maze_[snakePos.first][snakePos.second] = '<';
    else if(maze_[snakePos.first][snakePos.second] == ' ')
        maze_[snakePos.first][snakePos.second] = '>';

}

pair<int, int> Level::foodRandomStart(){
    int aux = (rand() % (linhas - 3)) + 1;
    int aux2 = (rand() % (colunas - 3)) + 1;
    if(maze_[aux][aux2] != ' '){
        return foodRandomStart();        
    }
    else{
       foodPos.first = aux;
       foodPos.second = aux2;
    }
    return foodPos;

}   

void Level::adicionaComida(){
    maze_[foodPos.first][foodPos.second] = 'F';
    comida--;
    if(comida == 0){
        cout << "ganhamo" << endl;
    }
}

void Level::mostrarInterface(){
    cout << "------------------------------" << endl;
    cout << "Comidas restantes: "<< comida;
    cout << "  Score: 197554" << endl;
    cout << "------------------------------" << endl;
}