#include "Actor.h"
#include <iostream>

AActor::AActor()
{
}

AActor::~AActor()
{
}

void AActor::BeginPlay()
{

}

void AActor::Move()
{
	std::cout << "AActor::Move()" << std::endl;
}

void AActor::Render()
{

}