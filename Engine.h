#pragma once

class UWorld;

class UEngine
{
public:
	UEngine();
	~UEngine();

	void Init();
	void Term();
	void Run();
	void Input();
	void Tick();
	void render();

	UWorld* World;
	bool bIsRunning = false;
};

