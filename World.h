#pragma once

class UWorld
{
public:
	UWorld();
	~UWorld();

	void Process();
	void Render();

	class APlayer* Player;
	class AGoblin* Goblin;
	class AWildBoar* Wildboar;
	class ASlime* Slime;

	int GoblinCount;
	int SlimeCount;
	int WildBoarCount;
	int PlayerCount;

};

