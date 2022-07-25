#pragma once
#include "PlaceableActor.h"
class ExtraLife : public PlaceableActor
{
public:
	ExtraLife(int x, int y, int life);

	int GetLife() const { return m_life; }

	virtual ActorType GetType() override { return ActorType::ExtraLife; }
	virtual void Draw() override;

private:
	int m_life;
};