//类的初始化与销毁
//1.构造函数
//2.析构函数
#include <iostream>
using namespace std;

class Person
{
public:
	//没有参数的构造函数
	Person()
	{
		cout << "默认的构造函数" << endl;
		age = 0;
	}
	//有参的构造函数
	//不要写参数的默认值
	Person(int n)
	{
		cout << "有参的构造函数" << endl;
		age = n;
	}
	//拷贝构造函数
	Person(const Person &pn)
	{
		age = pn.age;
		cout << "拷贝构造函数" << endl;
	}
	//析构函数
	~Person()
	{
		cout << "析构函数" << endl;
	}


	int age;
};

//调用构造函数
void test1()
{
	//调用默认构造函数
	//1.括号法
	Person p1;
	cout << "p1.age=" << p1.age << endl;
	//注意：不要在p1后加() 编译器会认为Person p1();是一个函数声明
	//调用有参的构造
	Person p2(20);
	cout << "p2.age=" << p2.age << endl;
	//调用拷贝构造
	Person p3(p2);
	cout << "p3.age=" << p3.age << endl;
	//2.显式法
	Person p4 = Person(18);
	cout << "p4.age=" << p4.age << endl;
	//这是一个匿名对象 特点：当前行执行结束后,系统会立即回收掉匿名对象
	//Person(18);
	
	Person p5 = Person(p3);
	cout << "p5.age=" << p5.age << endl;
	//3.隐式转换法
	Person p6 = 16;
	cout << "p6.age=" << p6.age << endl;
	Person p7 = p6;
	cout << "p7.age=" << p7.age << endl;
	
}


//什么时候会调用拷贝构造
void T2testin(Person p)
{
	cout << "调用test()" << endl;
}
Person T2testout()
{
	Person p1(18);
	return p1;
}

void test2()
{
	//1.使用一个已经创建完毕的对象来初始化一个新对象
	//Person p1(10);
	//Person p2(p1);
	//2.值传递的方式给函数参数传值
	//T2testin(p1);
	//3.以值方式返回局部对象
	T2testin(T2testout());
}

//深拷贝与浅拷贝
void test3()
{
	class people
	{
	public:
		
		people()
		{
			cout << "默认构造函数" << endl;
			age = 0;
			hight = NULL;
		}
		people(int inage,int inhight)
		{
			cout << "参数构造" << endl;
			age = inage;
			hight = new int(inhight);
		}
		//people(const people& p)
		//{
		//	cout << "拷贝(浅)构造" << endl;
		//	age = p.age;
		//	hight = p.hight;//浅拷贝->直接将属性用赋值的方式拷贝到目标对象中
		//	//浅拷贝可能会导致堆区的数据被重复释放导致程序奔溃
		//}

		//深拷贝
		people(const people& p)
		{
			cout << "拷贝(深)构造" << endl;
			age = p.age;
			hight = new int(*p.hight);
		}
		
		~people()
		{
			cout << "析构函数" << endl;
			delete hight;
		}
		int age;
		int* hight;
	};
	people p1(18,180);
	cout << "p1.age=" << p1.age << " p1.hight=" << p1.hight << " *p1.hight=" << *p1.hight << endl;
	people p2(p1);
	cout << "p2.age=" << p2.age << " p2.hight=" << p2.hight << " *p2.hight=" << *p2.hight << endl;
	//对象中只要会在堆区开辟空间，那我们就应该要用深拷贝从而避免浅拷贝带来的重复释放问题
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}