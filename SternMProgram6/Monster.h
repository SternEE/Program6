#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

class Monster {
public: 
	Monster(const std::string&, int=100);

	void setName(const std::string&);
	std::string getName() const;
	
	void setHP(int);
	int getHP() const;
	
	virtual int getAttack() const=0;

private:
	std::string name;
	int HP;
};

#endif
