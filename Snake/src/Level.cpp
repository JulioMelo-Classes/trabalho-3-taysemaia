#include "../include/Level.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

Level::Level(int alt, int larg, int com){
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

}


