#include <iostream>
#include "Engine.h"

using namespace std;

int main()
{
	UEngine* Engine = nullptr;

	Engine = new UEngine;
	Engine->Run();
	Engine->Term();

	return 0;
}