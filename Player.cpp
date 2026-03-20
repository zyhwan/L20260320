#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Gold.h"


APlayer::APlayer()
{
	x = 1;
	y = 1;
	Gold = nullptr;
}

APlayer::~APlayer()
{
}

void APlayer::AttacktoMonster()
{
	std::cout << "플레이어가 몬스터를 공격했다." << std::endl;
}

void APlayer::Move()
{
	std::cout << "플레이어 움직임." << std::endl;
}

void APlayer::GetMoney()
{
	std::cout << "돈을 얻습니다." << std::endl;
}

void APlayer::Die()
{
}
