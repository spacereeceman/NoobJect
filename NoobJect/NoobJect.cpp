// NoobJect.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CollisionMaths.h"
#include "Texture.h"
#include "Window.h"

#include <iostream>

#define PRINT std::cout <<
#define ENDL << std::endl;

int _tmain(int argc, _TCHAR* argv[])
{

	Window screen(1280, 720);
	// CollisionMaths is just an example class.
	CollisionMaths rect;

	// Texture class is just a texture mapped onto CollisionMaths, the rectangle.
	Texture img(10, 10);

	if (rect.X <= 0)
	{
		rect.X = 0;
	}

	if (rect.X + screen.width >= screen.width)
	{
		rect.X = screen.width - img.width;
	}

	if (rect.Y <= 0)
	{
		rect.Y = 0;
	}

	if (rect.Y + img.height >= screen.height)
	{
		rect.Y = screen.height - img.height;
	}


	// Down below is just a way of pausing the program so it doesn't exit till i say so. (Only works on windows machines)
	system("PAUSE");
	return 0;
}

