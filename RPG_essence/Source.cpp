#include <iostream>
#include "Header.h"
#include "Functions.cpp"



class Player {};

class WorldObject {


private:
	
	int	index;
	std::string name;
	std::string message;


public:

	void examine() {
		std::cout << '\n' << "This is" << name;
	}

	virtual void interact() = 0;
	virtual ~WorldObject();
};



class TerrainObject: WorldObject {};

class Building: WorldObject{};


class NPC{};

class Enemy: NPC {};;

class Friend: NPC{};









 
int main() {








































}