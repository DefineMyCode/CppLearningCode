#include "Circle.h"	

//����Բ��
	void Circle::SetCenter(Point px)
	{
		center = px;
	}
	//��ȡԲ��
	Point Circle::GetCenter()
	{
		return center;
	}
	//���ð뾶
	void Circle::SetR(int n)
	{
		r = n;
	}
	//��ȡ�뾶
	int Circle::GetR()
	{
		return r;
	}
	//��px��Բ�Ĺ�ϵ r-d
	int Circle::CirclePoint(Point px)
	{
		return r * r - px.PtP2(center);
	}