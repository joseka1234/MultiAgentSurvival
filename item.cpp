/*
* @Author: José Carlos Rodríguez Cortés
* @Date:   08/07/2017  02:11:45
* @Last Modified by:   José Carlos Rodríguez Cortés
* @Last Modified time: 08/07/2017  02:28:39
*/

#include <iostream>
#include "item.h"

using namespace std;

item::item(char _symbol) {
	setSymbol(_symbol);
}

item::~item() {

}

void item::setSymbol(char _symbol) {
	symbol = _symbol;
}

char item::getSymbol() {
	return symbol;
}
