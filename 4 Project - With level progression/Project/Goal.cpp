#include <iostream>
#include "Goal.h"

Goal::Goal(int x, int y)
	: PlaceableActor(x, y)
{
	
}

void Goal::Draw()
{
	std::cout << "X";
}
