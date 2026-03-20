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

	void Move();

protected:
	Transform Trans;
};