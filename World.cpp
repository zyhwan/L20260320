#include <iostream>
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

void UWorld::Process()
{

}

void UWorld::Render()
{
	std::cout << "플레이어 현재 좌표 (" << Player->x << ", " << Player->y << ") " << std::endl;


}