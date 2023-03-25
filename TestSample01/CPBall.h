#pragma once
class CPBall
{
private:
	float x;
	float vx;
	float y;
	float vy;
public:
	CPBall(float, float, float, float);

	float GetX();
	float GetY();
	float GetVX();
	float GetVY();

	void SetX(float);
	void SetY(float);
	void SetVX(float);
	void SetVY(float);

	void MoveX(float newX);	
	void MoveY(float newY);

	void MinusVX();
	void MinusVY();
};

