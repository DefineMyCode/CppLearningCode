#include "Point.h"

void Point::SetPoint(int x, int y)
{
	Px = x; Py = y;
}
int Point::GetX()
{
	return Px;
}
int Point::GetY()
{
	return Py;
}
//�㵽��ľ���ƽ��
int Point::PtP2(Point p2)
{
	return (Px - p2.GetX()) * (Px - p2.GetX()) + (Py - p2.GetY()) * (Py - p2.GetY());
}