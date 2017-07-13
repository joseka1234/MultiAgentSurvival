/*
* @Author: José Carlos Rodríguez Cortés
* @Date:   08/07/2017  01:06:27
* @Last Modified by:   José Carlos Rodríguez Cortés
* @Last Modified time: 08/07/2017  02:31:37
*/

#ifndef AGENT_H
#define AGENT_H

#include <string>
#include "map.h"
using namespace std;

typedef struct {
	int x;
	int y;
} point;

class agent {
private:
	string name;
	int health;
	int intelligence;
	int strength;
	int speed;
	point position;
	map* mapa;
public:
	// Constructors y Destructors
	agent(string _name, int _health, int _intelligence, int _strength, int _speed, point _position, map* _mapa);
	agent();
	~agent();

	// Getters y Setters
	string getName();
	void setName(string _name);
	int getHealth();
	void setHealth(int _health);
	int getIntelligence();
	void setIntelligence(int _intelligence);
	int getStrength();
	void setStrength(int _strength);
	int getSpeed();
	void setSpeed(int _speed);
	point getPosition();
	void setPosition(point _position);
	map* getMapa();
	void setMapa(map* _mapa);
	void printAgent();
};

#endif
