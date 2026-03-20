#pragma once

class APlayer;
class AMonster;

class UWorld
{
public:
	UWorld();
	~UWorld();

	APlayer* Player;
	AMonster* Monster;
};

