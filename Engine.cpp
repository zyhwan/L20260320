#include "Engine.h"
#include "World.h"

UEngine::UEngine()
{
	World = new UWorld;
}

UEngine::~UEngine()
{
	delete World;
	World = nullptr;
}
