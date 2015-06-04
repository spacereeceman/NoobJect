// NoobJect.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Human.h"

#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	Human hunter("Hunter_Noob01", 100, 100, 100, 100);

	// Will print out your name i passed through the constructor, "Hunter_Noob01".
	std::cout << hunter.name << std::endl;
	// Now setting your name to something else, instead of using a setter function. Theres no need for it.
	hunter.name = "Hunter_ReallyBadNoob01";
	// Printing out the new string i set it to.
	std::cout << hunter.name << std::endl;
	// I want to create a spacer line between this one and the health i print out below:
	std::cout << "\n" << std::endl;
	// Just one way of making a line, nothing special.

	// Same with all the other values; health, hunger, stamina and thirst.

	// Heres another example using health.
	std::cout << hunter.health << std::endl;
	hunter.health = 50;
	std::cout << hunter.health << std::endl;

	// Down below is just a way of pausing the program so it doesnt exit till i say so. (Only works on windows machines)
	system("PAUSE");
	return 0;
}

