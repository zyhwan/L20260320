#include "Actor.h"
#include <iostream>

AActor::AActor()
{
}

AActor::~AActor()
{
}

void AActor::Move()
{
	std::cout << "Move()" << std::endl;
}