#include "Engine.h"
#include "World.h"

UEngine::UEngine()
{
	//실제 엔진은 사용할 api도 클래스로 설계해 사용할 수 있는 형태로 초기화 해준다.
	Init();
}

UEngine::~UEngine()
{
	Term();
}

void UEngine::Init()
{
	World = new UWorld;
	bIsRunning = true;
}

void UEngine::Term()
{
	delete World;
	World = nullptr;
}

void UEngine::Run()
{
	while (bIsRunning)
	{
		Input();
		Tick();
		render();
	}
}

void UEngine::Input()
{
}

void UEngine::Tick()
{
}

void UEngine::render()
{
}
