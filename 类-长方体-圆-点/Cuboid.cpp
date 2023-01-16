#include <iostream>
using namespace std;

//长方体
class Cuboid 
{
public:
	//设置长、宽、高
	void CuboidSet(int L, int W, int H)
	{
		CuboidLong = L;
		CuboidWide = W;
		CuboidHight = H;
	}
	//获取长
	int GetL()
	{
		return CuboidLong;
	}
	//获取宽
	int GetW()
	{
		return CuboidWide;
	}
	//获取高
	int GetH()
	{
		return CuboidHight;
	}
	//获取表面积
	int GetS()
	{
		return (CuboidLong * CuboidWide + CuboidLong * CuboidHight + CuboidWide * CuboidHight) * 2;
	}
	//获取体积
	int GetV()
	{
		return CuboidLong * CuboidWide * CuboidHight;
	}
	//显示长宽高
	void Show()
	{
		cout << "长:" << CuboidLong << " 宽:" << CuboidWide << " 高:" << CuboidHight << " 表面积:" << GetS() << " 体积:" << GetV() << endl;
	}

	//比较两个长方体是否相同
	//2.类内函数
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
	//长
	int CuboidLong;
	//宽
	int CuboidWide;
	//高
	int CuboidHight;
};

//比较两个长方体是否相同
//1.全局函数
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
	cout << "c1的";
	c1.Show();
	cout << "c2的";
	c2.Show();
	
	cout << "全局函数比较：" << endl;
	if (CompareCuboid(c1, c2))
		cout << "c1与c2相同" << endl;
	else
		cout << "c1与c2不相同" << endl;

	cout << "类内行为比较：" << endl;
	if(c1.CompareCuboidByClass(c2))
		cout << "c1与c2相同" << endl;
	else
		cout << "c1与c2不相同" << endl;
	return 0;
}