//#include <iostream>
//using namespace std;
//
////����
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
//	//�㵽��ľ���ƽ��
//	int PtP2(Point p2)
//	{
//		return (Px - p2.GetX()) * (Px -p2.GetX()) + (Py - p2.GetY()) * (Py - p2.GetY());
//	}
//
//private:
//	int Px, Py;
//};
//
////Բ��
//class Circle
//{
//public:
//	//����Բ��
//	void SetCenter(Point px)
//	{
//		center = px;
//	}
//	//��ȡԲ��
//	Point GetCenter()
//	{
//		return center;
//	}
//	//���ð뾶
//	void SetR(int n)
//	{
//		r = n;
//	}
//	//��ȡ�뾶
//	int GetR()
//	{
//		return r;
//	}
//	//��px��Բ�Ĺ�ϵ r-d
//	int CirclePoint(Point px)
//	{
//		return r * r - px.PtP2(center);
//	}
//
//private:
//	//Բ��-��
//	Point center;
//	//�뾶
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
//		cout << "����Բ��" << endl;
//	else if (c1.CirclePoint(px) == 0)
//		cout << "����Բ��" << endl;
//	else
//		cout << "����Բ��" << endl;
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
	//����Բ�Ĺ�ϵ
	if (c1.CirclePoint(px) > 0)
		cout << "����Բ��" << endl;
	else if (c1.CirclePoint(px) == 0)
		cout << "����Բ��" << endl;
	else
		cout << "����Բ��" << endl;
	return 0;
}