#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"

#define			MAX_WILDBOAR_COUNT		5
#define			MAX_GOBLIN_COUNT		3
#define			MAX_SLIME_COUNT			20


using namespace std;

int main()
{
	//UEngine* Engine = nullptr;

	//Engine = new UEngine;
	//Engine->Run();
	//Engine->Term();

	//멧돼지(최대 5마리), 고블린(최대 3마리), 슬라임(1~20마리)

	srand(time(nullptr));

	int WildBoarCount;
	int GoblinCount;
	int SlimeCount;

	WildBoarCount = rand() % MAX_WILDBOAR_COUNT + 1;
	GoblinCount = rand() % MAX_GOBLIN_COUNT + 1;
	SlimeCount = rand() % MAX_SLIME_COUNT + 1;


	AWildBoar* WildBoars = new AWildBoar[WildBoarCount];
	AGoblin* Goblins = new AGoblin[GoblinCount];
	ASlime* Slimes = new ASlime[SlimeCount];

	cout << "맷돼지 수 : " << WildBoarCount << endl;
	for (int i = 0; i < WildBoarCount; i++)
	{
		WildBoars[i].Move();
	}

	cout << "고블린 수 : " << GoblinCount << endl;
	for (int i = 0; i < GoblinCount; i++)
	{
		Goblins[i].Move();
	}

	cout << "슬라임 수 : " << SlimeCount << endl;
	for (int i = 0; i < SlimeCount; i++)
	{
		Slimes[i].Move();
	}

	delete[] WildBoars;
	delete[] Goblins;
	delete[] Slimes;

	return 0;
}