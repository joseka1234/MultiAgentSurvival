/*
* @Author: José Carlos Rodríguez Cortés
* @Date:   08/07/2017  01:06:22
* @Last Modified by:   José Carlos Rodríguez Cortés
* @Last Modified time: 08/07/2017  02:10:10
*/

#include "agent.h"
#include <iostream>
using namespace std;

agent::agent(string _name, int _health, int _intelligence, int _strength, int _speed, point _position, map* _mapa) {
	setName(_name);
	setHealth(_health);
	setIntelligence(_intelligence);
	setStrength(_strength);
	setSpeed(_speed);
	setPosition(_position);
	setMapa(_mapa);
}

agent::agent() {
	setName("-1");
	setHealth(0);
	setIntelligence(0);
	setStrength(0);
	point punto;
	punto.x = 0;
	punto.y = 0;
	setPosition(punto);
}

agent::~agent() {

}


void agent::printAgent() {
	cout << "Name: " << getName() << endl;
	cout << "Health: " << getHealth() << endl;
	cout << "Intelligence: " << getIntelligence() << endl;
	cout << "Strength: " << getStrength() << endl;
	cout << "Position: ["<< getPosition().x << ", " << getPosition().y << "]" << endl;
}

// Getters y Setters
string agent::getName() {
	return name;
}

void agent::setName(string _name) {
	name = _name;
}

int agent::getHealth() {
	return health;
}

void agent::setHealth(int _health) {
	health = _health;
}

int agent::getIntelligence() {
	return intelligence;
}

void agent::setIntelligence(int _intelligence) {
	intelligence = _intelligence;
}

int agent::getStrength() {
	return strength;
}

void agent::setStrength(int _strength) {
	strength = _strength;
}

int agent::getSpeed() {
	return speed;
}

void agent::setSpeed(int _speed) {
	speed = _speed;
}

point agent::getPosition() {
	return position;
}

void agent::setPosition(point _position) {
	position = _position;
}

map* agent::getMapa() {
	return mapa;
}

void agent::setMapa(map* _mapa) {
	mapa = _mapa;
}
