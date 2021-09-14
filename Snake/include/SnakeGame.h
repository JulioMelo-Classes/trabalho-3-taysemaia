#ifndef SnakeGame_h
#define SnakeGame_h
#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include "Level.h"
#include "Player.h"
#include "Snake.h"

class SnakeGame{
    public:
        /**
        * @brief descreve os possíveis estados do jogo, fique à vontade para adicionar outros se necessário
        **/
        enum GameStates{
            RUNNING, //<! quando o jogo está executando o estado é RUNNING
            GAME_OVER, //<! quando o jogo deve terminar o estado é GAME_OVER
            WAITING_USER //<! quando o jogo deve esperar por uma entrada do usuário o estado é WAITING_USER
        };

    private:
        //<! atributos adicione outros se quiser
        std::vector<std::vector<std::string>> mazes;  //<! vector contendo todos os labirintos do arquivo
        std::vector<std::string> maze; //<! vector contendo o labirinto atual, pode ser interpretado como uma matriz
        int frameCount; //<! contador de frames, usado apenas como exemplo
        std::string choice; //<! usado na função process_actions para guardar a escolha do usuário
        GameStates state; //<! guarda o estado do jogo
        std::string file, modo; //<! strings com o nome do arquivo e o tipo do jogo
        std::vector<int> informacoesJogo; //<! vector com as informaçoes do labirinto (1 linha do arquivo)
        std::vector<Level> level; //<! vector contendo os leveis
        std::vector<Player> player; //<! vector contendo os players
        std::vector<Snake> snake; //<! vector contendo as cobras (1 pra cada jogo)
        int lvl; //<! variavel que diz qual o level atual
        
      

    public:
        /**
          @brief construtor 
          @param file o arquivo a ser carregado
          @param modo o modo do jogo (com ou sem rabo)
        **/
        SnakeGame(std::string file, std::string modo);
        /**
        * @brief chamado no main, este loop executa o jogo indefinidamente até que o usuário escolha terminar!
        */     
        void loop();
        /**
        * @brief funçao pra mostrar na tela a introdução do jogo [tela inicial]
        */ 
        void printIntro();

    private:
        /*! converte uma string em inteiro
            @param str a string a ser convertida
            @return a string convertida */
        int convertePraInteiro(std::string str);

        /**
        * @brief realiza a inicialização geral do jogo, fique à vontade para adicionar parâmetros se achar que deve
        **/
        void initialize_game();

        /**
        * @brief atualiza o estado do jogo, basicamente movendo os objetos, sorteando novas posições de comida
        **/
        void update();

        /**
        * @brief processa as entradas do jogador
        **/
        void process_actions();

        /**
        * @brief testa o estado do jogo e desenha a tela correspondente
        **/
        void render();

        /**
        * @brief é chamada quando o jogo termina a fim de destruir/resetar elementos do estado do jogo
        **/
        void game_over();
        
};

#endif //SnakeGame_h
