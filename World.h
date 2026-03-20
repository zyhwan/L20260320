#pragma once
#define			MAX_WILDBOAR_COUNT		5
#define			MAX_GOBLIN_COUNT		3
#define			MAX_SLIME_COUNT			20


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

