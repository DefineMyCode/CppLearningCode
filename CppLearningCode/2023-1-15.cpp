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
		if (sex == "��" || sex == "Ů")
		{
			p_sex = sex;
			return true;
		}
			
		else
		{
			cout << "�Ƿ����Ա�" << endl;
			return false;
		}
			
	}

private:
	int p_age=18;	  //ֻ��
	string p_name;//�ɶ���д
	string p_sex; //ֻд
};

int main()
{
	people p1;
	cout << "���������������" << endl;
	string name;
	cin >> name;
	p1.SetName(name);
	cout << "��ո�������ǣ�" << p1.GetName() << endl;
	cout << "Ĭ���������Ϊ��" << p1.GetAge() << endl;
	string sex;
	do
	{
		cout << "����������Ա�" << endl;
		cin >> sex;
	} while (!p1.SetSex(sex));
	return 0;
}