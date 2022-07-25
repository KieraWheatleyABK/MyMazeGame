#include "PlaceableActor.h"

PlaceableActor::PlaceableActor(int x, int y, ActorColor color)
	: m_pPosition(new Point(x, y))
	, m_IsActive(true)
	, m_color(color)
{

}

PlaceableActor::~PlaceableActor()
{
	delete m_pPosition;
	m_pPosition = nullptr;
}

int PlaceableActor::GetXPosition()
{
	return m_pPosition->x;
}

int PlaceableActor::GetYPosition()
{
	return m_pPosition->y;
}

int* PlaceableActor::GetXPositionPointer()
{
	return &(m_pPosition->x);
}

int* PlaceableActor::GetYPositionPointer()
{
	return &(m_pPosition->y);
}

void PlaceableActor::SetPosition(int x, int y)
{
	m_pPosition->x = x;
	m_pPosition->y = y;
}

void PlaceableActor::Place(int x, int y)
{
	m_pPosition->x = x;
	m_pPosition->y = y;
	m_IsActive = true;
}