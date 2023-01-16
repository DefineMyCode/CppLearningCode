//#include <iostream>
//using namespace std;
//
////点类
//class Point
//{
//public:
//	void SetPoint(int x, int y)
//	{
//		Px = x; Py = y;
//	}
//	int GetX()
//	{
//		return Px;
//	}
//	int GetY()
//	{
//		return Py;
//	}
//	//点到点的距离平方
//	int PtP2(Point p2)
//	{
//		return (Px - p2.GetX()) * (Px -p2.GetX()) + (Py - p2.GetY()) * (Py - p2.GetY());
//	}
//
//private:
//	int Px, Py;
//};
//
////圆类
//class Circle
//{
//public:
//	//设置圆心
//	void SetCenter(Point px)
//	{
//		center = px;
//	}
//	//获取圆心
//	Point GetCenter()
//	{
//		return center;
//	}
//	//设置半径
//	void SetR(int n)
//	{
//		r = n;
//	}
//	//获取半径
//	int GetR()
//	{
//		return r;
//	}
//	//点px与圆的关系 r-d
//	int CirclePoint(Point px)
//	{
//		return r * r - px.PtP2(center);
//	}
//
//private:
//	//圆心-点
//	Point center;
//	//半径
//	int r;
//};
//int main()
//{
//	Point px;
//	px.SetPoint(5, -3);
//	Point center;
//	center.SetPoint(0, 0);
//	Circle c1;
//	c1.SetCenter(center);
//	c1.SetR(10);
//	if (c1.CirclePoint(px) > 0)
//		cout << "点在圆内" << endl;
//	else if (c1.CirclePoint(px) == 0)
//		cout << "点在圆上" << endl;
//	else
//		cout << "点在圆外" << endl;
//	return 0;
//}

#include <iostream>
#include "Circle.h"
#include "Point.h"
using namespace std;
int main()
{
	Point px, center;
	px.SetPoint(9, -1);
	center.SetPoint(0, 0);
	Circle c1;
	c1.SetCenter(center);
	c1.SetR(10);
	//点与圆的关系
	if (c1.CirclePoint(px) > 0)
		cout << "点在圆内" << endl;
	else if (c1.CirclePoint(px) == 0)
		cout << "点在圆上" << endl;
	else
		cout << "点在圆外" << endl;
	return 0;
}