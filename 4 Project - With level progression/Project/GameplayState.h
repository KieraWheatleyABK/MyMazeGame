#pragma once
#include "GameState.h"
#include "Player.h"
#include "Level.h"

#include <windows.h>
#include <vector>
#include <string>
#include <mutex>

using std::mutex;

class StateMachineExampleGame;

class GameplayState : public GameState
{
	StateMachineExampleGame* m_pOwner;
	
	Player m_player;
	Level* m_pLevel;

	bool m_didBeatLevel;
	int m_skipFrameCount;
	static constexpr int kFramesToSkip = 2;

	int m_currentLevel;

	std::vector<std::string> m_LevelNames;

public:
	GameplayState(StateMachineExampleGame* pOwner);
	~GameplayState();

	virtual void Enter() override;
	virtual bool Update(bool processInput = true) override;
	virtual void Draw() override;

protected:
	void ProcessInput() override;
	void CheckBeatLevel();

private:
	void HandleCollision(int newPlayerX, int newPlayerY, bool processInput = false);
	void HandleActors(PlaceableActor* actor, int newX, int newY);
	bool Load();
	void DrawHUD(const HANDLE& console);
	void RunCollisionThread();
	void RunProcessInputThread();

	mutex m_drawMutex;
	mutex m_handleColMutex;
};
