#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "PaperMonster.h"

using namespace std;

PaperMonster::PaperMonster(const string &monsterName, int monsterHP, int monsterLength, int monsterWidth ) : Monster(monsterName, monsterHP) {
        setLength(monsterLength);
        setWidth(monsterWidth);
}

void PaperMonster::setLength(int monsterLength) {
        length=monsterLength;
}

int PaperMonster::getLength() const {return length;}

void PaperMonster::setWidth (int monsterWidth) {
        width=monsterWidth;
}

int PaperMonster::getWidth() const {return width;}

int PaperMonster::getAttack() const {return (getLength()*getWidth());}
