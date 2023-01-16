#pragma once

//点类
class Point
{
public:
	void SetPoint(int x, int y);

	int GetX();

	int GetY();

	//点到点的距离平方
	int PtP2(Point p2);

private:
	int Px, Py;
};