#include <iostream>
#include "World.h"
#include "Player.h"
#include "Monster.h"

UWorld::UWorld() 
	: PlayerCount(0), GoblinCount(0), SlimeCount(0), 
	WildBoarCount(0), Player(nullptr), Wildboar(nullptr),
	Goblin(nullptr), Slime(nullptr)
{

}

UWorld::~UWorld()
{
	//객체의 개수에 따라서 delete를 호출을 다르게 해준다. 객체 관리


}

void UWorld::Process()
{

}

void UWorld::Render()
{

}