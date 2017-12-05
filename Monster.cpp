#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "Monster.h"

using namespace std;

Monster::Monster(const string &monsterName, int monsterHP) : name(monsterName), HP(monsterHP) {
}

void Monster::setName(const string& monsterName) {
	name=monsterName;
}

string Monster::getName() const {return name;}

void Monster::setHP(int monsterHP) {
	HP=monsterHP;
}

int Monster::getHP() const {return HP;}
