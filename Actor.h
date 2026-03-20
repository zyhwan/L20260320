#pragma once
struct Vector2D
{
	int x;
	int y;
};

struct Transform
{
	Vector2D Pos;
	Vector2D Scale;
};

class AActor
{
public:
	AActor();
	~AActor();


	virtual void BeginPlay();
	virtual void Move();
	virtual void Tick();
	virtual void Render();

protected:
	Transform Trans;
};