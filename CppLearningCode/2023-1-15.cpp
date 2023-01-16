#include <iostream>
#include <string>
using namespace std;

class people
{
public:
	int GetAge()
	{
		return p_age;
	}
	void SetName(string name)
	{
		p_name = name;
	}
	string GetName()
	{
		return p_name;
	}
	bool SetSex(string sex)
	{
		if (sex == "男" || sex == "女")
		{
			p_sex = sex;
			return true;
		}
			
		else
		{
			cout << "非法定性别！" << endl;
			return false;
		}
			
	}

private:
	int p_age=18;	  //只读
	string p_name;//可读可写
	string p_sex; //只写
};

int main()
{
	people p1;
	cout << "请输入你的姓名：" << endl;
	string name;
	cin >> name;
	p1.SetName(name);
	cout << "你刚刚输入的是：" << p1.GetName() << endl;
	cout << "默认你的年龄为：" << p1.GetAge() << endl;
	string sex;
	do
	{
		cout << "请输入你的性别：" << endl;
		cin >> sex;
	} while (!p1.SetSex(sex));
	return 0;
}