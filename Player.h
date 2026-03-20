#pragma once
#include "Actor.h"

class AMonster;
class AGold;

class APlayer : public AActor
{
public:
	APlayer();
	~APlayer();

	void AttacktoMonster();
	void Move();
	void GetMoney();

	AGold* Gold;
};

