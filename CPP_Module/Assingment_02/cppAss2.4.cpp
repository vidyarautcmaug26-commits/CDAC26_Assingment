//============================================================================
// Name        : 4.cpp
// Author      : vidya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
using namespace std;

int level=1;
namespace Engine{
namespace Audio{
void playsound(string name){
	cout<<"Playing:"<<name<<endl;
}
}
}

class Entity{
private:
	string name;
	int health;
	int level;
   string type;
public:
	int getHealth() const {
		return health;
	}

	Entity& setHealth(int health){
		this->health = health;
		return *this;
	}

	int getLevel() const {
		return level;
	}

	Entity&  setLevel(int level) {
		this->level = level;
		return *this;
	}

	const string& getName() const {
		return name;
	}

	Entity&  setName(const string &name) {
		this->name = name;
		return *this;
	}

	const string& getType() const {
		return type;
	}

	Entity&  setType(const string &type) {
		this->type = type;
		return *this;
	}
};
	namespace Physics{
	double clamp(double val,double min,double max){                 //Clamp = restrict a value to a minimum and maximum limit.
		if(val<min){
			return min;
		}else if(val>max){
			return max;
		}else{
           return val;
		}
	}
	double lerp(double a,double b,double t){
		return (a+(b-a)*t);

	}

	}

	namespace Gamemath{
	int clamp(int val,int min,int max){
		if(val<min){
			return min;
		}else if(val>max){
			return max;
		}else{
			return val;
		}

	}
	double lerp(double a,double b,double t){       //LERP(A, B, t) = A + (B - A) × t
		return (a+(b-a)*t);
	}
	}

int main() {
	int level=10;
	cout<<"Global Level:"<<::level<<endl;
	cout<<"Local level:"<<level<<endl;
	Engine::Audio::playsound("Gun_shot");
	Entity player,enemy,item;
	player.setName("Aragorn").setHealth(100).setLevel(10).setType("player");    //aragorn is charcter name
	enemy.setName("Orc").setHealth(60).setLevel(5).setType("Enemy");          // orc means monster or enemy
	item.setName("HealthPotion").setHealth(0).setLevel(1).setType("Item");   //Healtpotion means medicine or drink for player to restore health of character
	int Physicsvalue=Physics::clamp(100,0,50);
	int Gamemathvalue=Gamemath::clamp(50,20,35);
	int R,C;
	int **grid=new int*[R];                            //create rows for e.g 3 rows

	cout<<"Enter a number of rows:"<<endl;
	cin>>R;
	cout<<"Enter a number of coloum:"<<endl;
	cin>>C;

	for(int i=0;i<R;i++){
		grid[i]=new int[C];
	}
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			grid[i][j]=rand()%5;
		}
	}
	cout<<endl;
	cout<<"=======Game Map========="<<endl;
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cout<<grid[i][j]<<" ";
        }
		cout<<endl;
	}
cout<<endl;
	cout<<"Legend: ";
    cout<<"0=Grass  ";
    cout<<"1=Water  ";
    cout<<"2=Mountain  ";
    cout<<"3=Forest  ";
    cout<<"4=Dungeon  "<<endl;        //Dungeon means prison or basement

   int grass=0;
   int Water=0;
   int Mountain=0;
   int Forest=0;
   int Dungeon=0;


   for(int i=0;i<R;i++){
     for(int j=0;j<C;j++){
    	if(grid[i][j]==0){
    		grass++;
    	}else if(grid[i][j]==1){
    	    		Water++;
    	 }else if(grid[i][j]==2){
    	    		Mountain++;
    	 }else if(grid[i][j]==3){
    	    	    Forest++;
    	}else{
    	   Mountain++;
    	}
    }
 }
   cout<<endl;
    cout<<"Tile Count:"<<endl;
    cout<<"Grass:"<<grass<<endl;
    cout<<"Water:"<<Water<<endl;
    cout<<"Grass:"<<Mountain<<endl;
    cout<<"Grass:"<<Forest<<endl;
    cout<<"Grass:"<<Dungeon<<endl;


	return 0;
}
