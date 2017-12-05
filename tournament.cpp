#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include <random>
#include "Monster.cpp"
#include "Monster.h"
#include "RockMonster.cpp"
#include "RockMonster.h"
#include "PaperMonster.cpp"
#include "PaperMonster.h"
#include "ScissorsMonster.cpp"
#include "ScissorsMonster.h"

using namespace std;

int main(){
	random_device rd;
	mt19937 g(rd());
	int x;
	int i;
	int v;
	int round = 1;
	vector<Monster*> test;
	ifstream inFile("P6Input.txt", ios::in);
        if (!inFile){
                cerr << "file could not be opened" << endl;
                exit(EXIT_FAILURE);
        }
        string type;
        string name;
        int HP;
        int a;
        int b;
        while (!inFile.eof()){
                inFile >> type;
                if (type=="Rock"){
                        inFile >> name >> HP >> a >> b;
                        test.push_back(new RockMonster(name, HP, a, b));
                }
                else if (type=="Paper"){
                        inFile >> name >> HP >> a >> b;
                        test.push_back(new PaperMonster(name, HP, a, b));
                }
                else {
                        inFile >> name >> HP >> a;
                        test.push_back(new ScissorsMonster(name, HP, a));
                }
        }
	bool winner;
	while (test.size()!=2){
	cout << "Monsters remaining: "<<test.size()<<endl;
	cout << endl <<"==========ROUND"<<round<<"=========="<<endl<<endl;
	shuffle ( test.begin(), test.end(), g );
	round++;
	for(x=0; x<test.size();x+=2){
		if(x>=test.size()-2){
		cout<<endl<<test[x]->getName()<<" has a bye"<<endl; 
		}
		else{	
			winner=true;
			cout<< endl<<test[x]->getName() << " vs " << test[x+1]->getName()<<endl;
			while (winner){
				test[x+1]->setHP(test[x+1]->getHP()-test[x]->getAttack());
				if (test[x+1]->getHP()<=0){
					cout<<test[x]->getName()<<" wins!"<<endl;
					winner=false;
				}
				else {
					test[x]->setHP(test[x]->getHP()-test[x+1]->getAttack());
					if (test[x]->getHP()<=0){
					cout<< test[x+1]->getName() << " wins!"<<endl;
					winner=false;
					}
				}
			}
		}
	}
	
	for(v=0; v<test.size();v++){
		if (test[v]->getHP()<=0){
			test.erase(test.begin()+v);
		}
	}
	}
	winner = true;
	cout<<endl<<endl<<"===============FINALS================"<<endl<<endl<<"Finalists: "<<test[0]->getName()<<" and  "<<test[1]->getName()<<endl<<endl;
	shuffle ( test.begin(), test.end(), g );
	while (winner){
	test[1]->setHP(test[1]->getHP()-test[0]->getAttack());
        if (test[1]->getHP()<=0){
        	cout<<test[0]->getName()<<" wins! "<< endl <<test[0]->getName()<<" won with only "<<test[0]->getHP()<<" health left" << endl;
        	winner=false;
	}
        else{
        	test[0]->setHP(test[0]->getHP()-test[1]->getAttack());
        	if (test[0]->getHP()<=0){
        	cout<< test[1]->getName() << " wins! " << endl << test[1]->getName()<<" won with only "<<test[1]->getHP()<<" health left" << endl;
                winner=false;
		}
	}
	}
	cout<<endl<<endl;
	return 0;
}

