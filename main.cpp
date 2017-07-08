/*
* @Author: José Carlos Rodríguez Cortés
* @Date:   08/07/2017  01:06:15
* @Last Modified by:   José Carlos Rodríguez Cortés
* @Last Modified time: 08/07/2017  02:34:23
*/

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <string>
#include <sstream>
#include "agent.h"
#include "map.h"

#define N_AGENTS 100

using namespace std;

agent CreateAgent (int nameIndex, map* mapa);
int getRandomNumber (int min, int max);

int main(){
	srand(time(NULL));
	map* mapa = new map();
	vector<agent> agentes;
	for (int i = 0; i < N_AGENTS; i++) {
		agentes.push_back(CreateAgent(i, mapa));
		agentes[i].printAgent();
	}
    return 0;
}

agent CreateAgent(int nameIndex, map* mapa) {
	point punto;
	punto.x = getRandomNumber(0,100);
	punto.y = getRandomNumber(0,100);
	agent agente(
			to_string(nameIndex),
			getRandomNumber(80,120),
			getRandomNumber(5,20),
			getRandomNumber(5,20),
			punto,
			mapa
		);
	return agente;
}

int getRandomNumber (int min, int max) {
	return rand() % (max - min) + min;
}
