#ifndef ROCKMONSTER_H
#define ROCKMONSTER_H

#include <string>
#include "Monster.h"

class RockMonster : public Monster {
public:
	RockMonster(const std::string&, int=100, int=0, int=0);
	virtual ~RockMonster() = default;
	
	void setMass(int);
	int getMass() const;
	
	void setVelocity(int);
	int getVelocity() const;

	virtual int getAttack() const override;
private:
	int mass;
	int velocity;
};
#endif
