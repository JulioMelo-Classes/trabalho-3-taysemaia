#include "../include/Snake.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

Snake::Snake(std::string modo){
	if(modo == "com-rabo"){
		modoJogo = modo;
	}
	else if(modo == "sem-rabo"){
		modoJogo = modo;
	}
	else{
	cout << "Modo inválido, jogo rejeitado :(" << endl;
		exit(1);
	}
}

