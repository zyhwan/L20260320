#include "World.h"
#include "Player.h"
#include "Monster.h"

UWorld::UWorld()
{
	Player = new APlayer();
	Monster = new AMonster();
}

UWorld::~UWorld()
{
	delete Player;
	Player = nullptr;
	delete Monster;
	Monster = nullptr;
}
