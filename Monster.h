#pragma once
#include "Actor.h"

class AMonster : public AActor
{
public:
	AMonster();
	~AMonster();

	void AttacktoPlayer();
	void Dead();
	void Move();
	void DropMoney();
};

