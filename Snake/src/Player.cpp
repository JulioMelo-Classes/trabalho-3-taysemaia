#include "../include/Player.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <vector>

int Player::calculaScore(int passos){

	score = passos * 5;

	return score;
}

bool Player::findSolution(){
	return true;
}
