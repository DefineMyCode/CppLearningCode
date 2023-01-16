#include <iostream>
using namespace std;

//������
class Cuboid 
{
public:
	//���ó�������
	void CuboidSet(int L, int W, int H)
	{
		CuboidLong = L;
		CuboidWide = W;
		CuboidHight = H;
	}
	//��ȡ��
	int GetL()
	{
		return CuboidLong;
	}
	//��ȡ��
	int GetW()
	{
		return CuboidWide;
	}
	//��ȡ��
	int GetH()
	{
		return CuboidHight;
	}
	//��ȡ�����
	int GetS()
	{
		return (CuboidLong * CuboidWide + CuboidLong * CuboidHight + CuboidWide * CuboidHight) * 2;
	}
	//��ȡ���
	int GetV()
	{
		return CuboidLong * CuboidWide * CuboidHight;
	}
	//��ʾ�����
	void Show()
	{
		cout << "��:" << CuboidLong << " ��:" << CuboidWide << " ��:" << CuboidHight << " �����:" << GetS() << " ���:" << GetV() << endl;
	}

	//�Ƚ������������Ƿ���ͬ
	//2.���ں���
	bool CompareCuboidByClass(Cuboid c2)
	{
		if (CuboidLong == c2.GetL() && CuboidWide == c2.GetW() && CuboidHight == c2.GetH())
		{
			return true;
		}
		else
			return false;
	}

private:
	//��
	int CuboidLong;
	//��
	int CuboidWide;
	//��
	int CuboidHight;
};

//�Ƚ������������Ƿ���ͬ
//1.ȫ�ֺ���
bool CompareCuboid(Cuboid c1, Cuboid c2)
{
	if (c1.GetL() == c2.GetL() && c1.GetW() == c2.GetW() && c1.GetH() == c2.GetH())
		return true;
	else
		return false;
}

int main1()
{
	Cuboid c1, c2;
	c1.CuboidSet(10, 9, 8);
	c2.CuboidSet(11, 12, 13);
	cout << "c1��";
	c1.Show();
	cout << "c2��";
	c2.Show();
	
	cout << "ȫ�ֺ����Ƚϣ�" << endl;
	if (CompareCuboid(c1, c2))
		cout << "c1��c2��ͬ" << endl;
	else
		cout << "c1��c2����ͬ" << endl;

	cout << "������Ϊ�Ƚϣ�" << endl;
	if(c1.CompareCuboidByClass(c2))
		cout << "c1��c2��ͬ" << endl;
	else
		cout << "c1��c2����ͬ" << endl;
	return 0;
}