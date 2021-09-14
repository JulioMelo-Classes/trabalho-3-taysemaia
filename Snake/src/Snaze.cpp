#include <iostream>
#include "../include/SnakeGame.h"
#include <typeinfo>
#include <stdlib.h>
#include <time.h>
#include <random>

using namespace std;

int main(int argc, char *argv[]){
    srand(time(NULL));
    std::string file = argv[1];
    std::string modo = argv[2];

    SnakeGame game(file, modo);
   

    game.loop(); //bloqueia aqui e só saí quando o jogo termina

    return 0;
}
