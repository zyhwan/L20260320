#pragma once

class APlayer;
class AMonster;

class UWorld
{
public:
	UWorld();
	~UWorld();

	void Process();
	void Render();

	APlayer* Player;
	AMonster* Monster;
};

