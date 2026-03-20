#pragma once
#include "Actor.h"

class AMonster : public AActor
{
public:
	AMonster();
	~AMonster();

	void AttacktoPlayer();
	void Dead();
	virtual void Move() override;
	void DropMoney();
};

