#ifndef SCISSORSMONSTER
#define SCISSORSMONSTER

#include <string>
#include "Monster.h"

class ScissorsMonster : public Monster {  
public:
        ScissorsMonster(const std::string&, int=100, int=0);

        void setSharpness(int);
        int getSharpness() const; 

        virtual int getAttack() const override;;
private:
	int sharpness;
};
#endif


