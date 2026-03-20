#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"
#include <vector>

using namespace std;

int main()
{
	vector<AActor*> Actors;

	Actors.push_back(new AGoblin);
	Actors.push_back(new ASlime);
	Actors.push_back(new AMonster);
	Actors.push_back(new APlayer);

	//모든 엑터 이동
	for (int i = 0; i < Actors.size(); ++i)
	{
		Actors[i]->Move();
	}

	//OOP 최종단계
	// 각각의 객체에 명령을 하는것이 아닌 모든 엑터가 동시에 
	for (const auto& Actor : Actors) // &: 참조로 복사를 하지않겠다. const: 읽기만 하겠다. 복사는 비용이 많이 들기 때문에 이와 같이 읽기만 할경우엔 최적화된 코드가 좋다.
	{
		Actor->Move();
	}

	Actors.clear();
	for (auto& Actor : Actors)
	{
		delete Actor;
	}


	return 0;
}