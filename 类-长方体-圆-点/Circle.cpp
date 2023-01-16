#include "Circle.h"	

//设置圆心
	void Circle::SetCenter(Point px)
	{
		center = px;
	}
	//获取圆心
	Point Circle::GetCenter()
	{
		return center;
	}
	//设置半径
	void Circle::SetR(int n)
	{
		r = n;
	}
	//获取半径
	int Circle::GetR()
	{
		return r;
	}
	//点px与圆的关系 r-d
	int Circle::CirclePoint(Point px)
	{
		return r * r - px.PtP2(center);
	}