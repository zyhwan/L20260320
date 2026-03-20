#include <iostream>
#include "World.h"
#include "Player.h"
#include "Monster.h"

UWorld::UWorld() 
	: PlayerCount(1), GoblinCount(rand() % MAX_GOBLIN_COUNT + 1), SlimeCount(rand() % MAX_SLIME_COUNT + 1),
	WildBoarCount(rand() % MAX_WILDBOAR_COUNT + 1)
{
	Player = new APlayer;



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