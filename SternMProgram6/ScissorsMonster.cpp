
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "ScissorsMonster.h"

using namespace std;

ScissorsMonster::ScissorsMonster(const string &monsterName, int monsterHP, int monsterSharpness ) : Monster(monsterName, monsterHP) {
        setSharpness(monsterSharpness);
}

void ScissorsMonster::setSharpness(int monsterSharpness) {
        sharpness=monsterSharpness;
}

int ScissorsMonster::getSharpness() const {return sharpness;}

int ScissorsMonster::getAttack() const {return getSharpness();}


