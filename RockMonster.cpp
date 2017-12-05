
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "RockMonster.h"

using namespace std;

RockMonster::RockMonster(const string &monsterName, int monsterHP, int monsterMass, int monsterVelocity ) : Monster(monsterName, monsterHP) {
	setMass(monsterMass);
	setVelocity(monsterVelocity);
}

void RockMonster::setMass(int monsterMass) {
        mass=monsterMass;
}

int RockMonster::getMass() const {return mass;}

void RockMonster::setVelocity (int monsterVelocity) {
	velocity=monsterVelocity;
}

int RockMonster::getVelocity() const {return velocity;}

int RockMonster::getAttack() const {return (getMass()*getVelocity()*getVelocity());}

