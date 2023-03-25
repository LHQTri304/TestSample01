#include "CPBall.h"

//Constructor
CPBall::CPBall(float xx, float vxx, float yy, float vyy)
{
	x = xx;
	vx = vxx;
	y = yy;
	vy = vyy;
}


// 4 get function
float CPBall::GetX()
{
	return x;
}

float CPBall::GetY()
{
	return y;
}

float CPBall::GetVX()
{
	return vx;
}

float CPBall::GetVY()
{
	return vy;
}


// 4 Set function
void CPBall::SetX(float XX)
{
	x = XX;
}

void CPBall::SetY(float YY)
{
	y = YY;
}

void CPBall::SetVX(float VXX)
{
	vx = VXX;
}

void CPBall::SetVY(float VYY)
{
	vy = VYY;
}


//Move function
void CPBall::MoveX(float newX)
{
	x += newX;
}

void CPBall::MoveY(float newY)
{
	y += newY;
}


//Minus functon
void CPBall::MinusVX()
{
	vx = -vx;
}

void CPBall::MinusVY()
{
	vy = -vy;
}