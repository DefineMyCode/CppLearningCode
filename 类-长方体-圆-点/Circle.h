#pragma once
#include "Point.h"
using namespace std;
//Բ��
class Circle
{
public:
	//����Բ��
	void SetCenter(Point px);
	
	//��ȡԲ��
	Point GetCenter();

	//���ð뾶
	void SetR(int n);

	//��ȡ�뾶
	int GetR();

	//��px��Բ�Ĺ�ϵ r-d
	int CirclePoint(Point px);

private:
	//Բ��-��
	Point center;
	//�뾶
	int r;
};

