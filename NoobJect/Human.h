#pragma once

#include <iostream>
#include <string>

class Human
{
public:
	Human(std::string _name, int _health, int _stamina, int _hunger, int _thirst);
	
	inline void printAll()
	{
		std::cout << "Name: " <<  name << std::endl;
		std::cout << "Health: " << health << std::endl;
		std::cout << "Stamina: " << stamina << std::endl;
		std::cout << "Hunger: " << hunger << std::endl;
		std::cout << "Thirst: " << thirst << std::endl;
	};
	
public:
	std::string name;
	int health;
	int stamina;
	int hunger;
	int thirst;
};

