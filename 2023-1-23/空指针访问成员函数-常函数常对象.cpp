#include <iostream>
using namespace std;

class person
{
public:
	void ShowClassName()
	{
		cout << "class name:person" << endl;
	}
	void ShowAge()
	{
		if (this == NULL)
		{
			cout << "不能用NULL调用 可能会访问未开辟空间的成员 的函数" << endl;
			return;
		}
		cout << "age:" << age << endl;
	}

	void AddAge()
	{
		age += 10;
	}

	//常函数
	void func1() const
	{
		//常函数只能修改mutable修饰的成员
		//age = 10;
		cout << age << endl;
		m_num = 10;
	}
	int age=100;
	//mutable->可变的
	mutable int m_num;
};
int main()
{
	person *p1=NULL;
	p1->ShowClassName();
	//不能用空指针调用this=NULL的函数
	//不能用NULL调用 可能会访问未开辟空间的成员 的函数
	p1->ShowAge();
	person p2;
	p2.func1();
	
	//常对象 只能调用常函数 修改mutable修饰的成员
	const person p3=p2;
	p3.func1();
	p3.m_num = 100;
	cout << "m_num=" << p3.m_num << endl;
	return 0;
}