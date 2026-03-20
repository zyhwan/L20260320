#include <iostream>
#include "Monster.h"
#include "Player.h"

AMonster::AMonster()
{

}

AMonster::~AMonster()
{
}

void AMonster::AttacktoPlayer()
{
	std::cout << "플레이어를 공격했다." << std::endl;
}

void AMonster::Move()
{
	std::cout << "몬스터 움직임." << std::endl;
}

void AMonster::Dead()
{
	std::cout << "몬스터 죽음." << std::endl;
}

void AMonster::DropMoney()
{
	std::cout << "골드를 드랍함." << std::endl;
}
