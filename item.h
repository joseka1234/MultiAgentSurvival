/*
* @Author: José Carlos Rodríguez Cortés
* @Date:   08/07/2017  02:11:41
* @Last Modified by:   José Carlos Rodríguez Cortés
* @Last Modified time: 08/07/2017  02:17:58
*/

#pragma once
#ifndef ITEM
#define ITEM

class item {
private: 
	char symbol;
public:
	item(char _symbol);
	~item();
	char getSymbol();
	void setSymbol(char _symbol);
};

#endif
