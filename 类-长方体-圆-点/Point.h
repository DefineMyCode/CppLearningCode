#pragma once

//����
class Point
{
public:
	void SetPoint(int x, int y);

	int GetX();

	int GetY();

	//�㵽��ľ���ƽ��
	int PtP2(Point p2);

private:
	int Px, Py;
};