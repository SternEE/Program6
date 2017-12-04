#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <ctime>
#include <random>
#include "RockMonster.cpp"
#include "Monster.h"
#include "Monster.cpp"
#include "RockMonster.h"
#include "PaperMonster.cpp"
#include "PaperMonster.h"
#include "ScissorsMonster.cpp"
#include "ScissorsMonster.h"

using namespace std;

int main(){
random_device rd;
mt19937 g(rd());
int choice;
int x;
int i;
vector<int> george = vector<int>();
	for (x=0; x<5; x++){
		cout<<"enter int: ";
		cin>> choice;
		george.push_back(choice);	
	}
	shuffle ( george.begin(), george.end(), g );
	for( auto &i : george) {
		cout << i  << endl;
	}
vector<Monster*> test;
RockMonster Jeff("jeff", 100, 10, 10);
int answer=Jeff.getAttack();
cout<<endl<<answer<<endl;
RockMonster Roy("roy", 100, 20, 10);
PaperMonster Joe("joe", 100, 5, 10);
ScissorsMonster Rohan("rohan", 100, 25);
cout<<endl<<Roy.getAttack();
test.push_back(&Jeff);
test.push_back(&Roy);
test.push_back(&Joe);
test.push_back(&Rohan);
for ( Monster* monsterPtr : test ){
	cout<<endl<< monsterPtr->getAttack();
}
test.erase (test.begin());
for ( Monster* monsterPtr : test ) {
	cout << endl<< monsterPtr->getName()<<endl;
}
return 0; 
}
