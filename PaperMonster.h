#ifndef PAPERMONSTER
#define PAPERMONSTER

#include <string>
#include "Monster.h"

class PaperMonster : public Monster {  
public:
        PaperMonster(const std::string&, int=100, int=0, int=0);

        void setLength(int);
        int getLength() const; 

        void setWidth(int);
        int getWidth() const;

        virtual int getAttack() const override;
private:
	int length;
	int width;
};
#endif


