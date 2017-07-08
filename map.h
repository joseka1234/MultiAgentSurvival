/*
* @Author: José Carlos Rodríguez Cortés
* @Date:   08/07/2017  01:27:38
* @Last Modified by:   José Carlos Rodríguez Cortés
* @Last Modified time: 08/07/2017  02:43:25
*/

#pragma once
#ifndef MAP
#define MAP

#include <vector>
#include "item.h"

using namespace std;

class map {
private: 
	vector<item> posiciones;
public:
	map(int itemFrequency);
	~map();
	vector<item> getPosiciones();
	void setPosiciones(vector<item> posiciones);
	item getItem(int x, int y);
	void setItem(int x, int y, item _item);
	void printMap();
};

#endif
