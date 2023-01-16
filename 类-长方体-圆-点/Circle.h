#pragma once
#include "Point.h"
using namespace std;
//圆类
class Circle
{
public:
	//设置圆心
	void SetCenter(Point px);
	
	//获取圆心
	Point GetCenter();

	//设置半径
	void SetR(int n);

	//获取半径
	int GetR();

	//点px与圆的关系 r-d
	int CirclePoint(Point px);

private:
	//圆心-点
	Point center;
	//半径
	int r;
};

