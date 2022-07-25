#include "ExtraLife.h"
#include <iostream>

ExtraLife::ExtraLife(int x, int y, int life)
	: PlaceableActor(x, y)
	, m_life(life)
{

}

void ExtraLife::Draw()
{
	std::cout << "^";
}