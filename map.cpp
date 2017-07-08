/*
* @Author: José Carlos Rodríguez Cortés
* @Date:   08/07/2017  01:27:33
* @Last Modified by:   José Carlos Rodríguez Cortés
* @Last Modified time: 08/07/2017  02:53:23
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "map.h"
#define MAP_SIZE 30

using namespace std;

int getRand (int min, int max) {
	return rand() % (max - min) + min;
}

map::map(int itemFrequency) {
	srand(time(NULL));
	setPosiciones(vector<item>());
	for (int i = 0; i < MAP_SIZE; i++) {
		for (int j = 0; j < MAP_SIZE; j++) {
			posiciones.push_back(item('O'));
		}
	}
	for (int i = 0; i < (itemFrequency * MAP_SIZE * MAP_SIZE) / 100; i++) {
		setItem(getRand(0, MAP_SIZE - 1), getRand(0, MAP_SIZE - 1), item('F'));
	}
}

map::~map() {

}

void map::printMap() {
	cout << endl;
	for (int i = 0; i < MAP_SIZE; i++) {
		for (int j = 0; j < MAP_SIZE; j++) {
			cout << getItem(i,j).getSymbol() << " ";
		}
		cout << endl;
	}
}

// Getters y Stters
vector<item> map::getPosiciones() {
	return posiciones;
}

void map::setPosiciones(vector<item> _posiciones) {
	posiciones = _posiciones;
}

item map::getItem(int x, int y) {
	return posiciones[x + y * MAP_SIZE];
}

void map::setItem(int x, int y, item _item) {
	posiciones[x + y * MAP_SIZE] = _item;
}