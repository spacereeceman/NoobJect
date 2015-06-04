#include "stdafx.h"
#include "Human.h"


Human::Human(std::string _name, int _health, int _stamina, int _hunger, int _thirst)
{
	// Variables are public, therefore don't have to use a pointer. Like in your code.

	name = _name;
	health = _health;
	stamina = _stamina;
	hunger = _hunger;
	thirst = _thirst;
}

