#pragma once

#include <iostream>
#include <string>

class Human
{
public:
	Human(std::string _name, int _health, int _stamina, int _hunger, int _thirst);

	std::string name;
	int health;
	int stamina;
	int hunger;
	int thirst;
};

