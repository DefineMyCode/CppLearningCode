//类的初始化与销毁
//1.构造函数
//2.析构函数
#include <iostream>
#include <string>
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

//初始化列表
void test4()
{
	class person
	{
	public:
		/*person()
		{
			age = 0;
			height = 0;
			weight = 0;
		}*/
		//初始化列表形式：
		person() :age(0), height(0),weight(0)
		{
			//其他操作
		}
		/*person(int a,int b,int c)
		{
			age = a;
			height = b;
			weight = c;
		}*/
		//初始化列表形式：
		person(int a, int b, int c) :age(a), height(b), weight(c)
		{
			//其他操作
		}
		void show()
		{
			cout << "age=" << age << " height=" << height << " weight=" << weight << endl;
		}
		int age;
		int height;
		int weight;
	};
	person p1;
	p1.show();
	person p2(1, 2, 3);
	p2.show();
}

//对象内部包含其他对象
void test5()
{
	class person 
	{
	public:
		person() :name("人")
		{
			cout << "person参数构造" << endl;
		}
		~person()
		{
			cout << "person析构函数" << endl;
		}
		string name;
	};
	class room
	{
	public:
		room() :id(000) 
		{
			cout << "room参数构造" << endl;
		}
		~room()
		{
			cout << "room析构函数" << endl;
		}
		int id;
	};
	class home
	{
	public:
		home() :address("地球")
		{
			cout << "home参数构造" << endl;
		}
		void show()
		{
			cout << "地址：" << address << endl;
			cout << "老人姓名: " << older.name << endl;
			cout << "一楼房间：编号：" << first.id << endl;
		}
		~home()
		{
			cout << "home析构函数" << endl;
		}
		string address;
		person older;
		person younger;
		room first;
	};
	
	home h1;
	h1.show();
	//先构造对象中的对象再构造对象本身，析构相反
}

//静态成员变量和静态成员函数(静态成员)
//1.不能定义在函数体内
class person
{
public:
	//静态函数
	//1.程序共享一个函数
	//2.只能访问静态成员变量
	static void func()
	{
		//cout << "m_height=" << m_height << endl;
		cout << "m_age=" << m_age << endl;
		cout << "func running" << endl;
	}
	/*void func2()
	{
		cout << "m_height=" << m_height << endl;
	}*/
	int m_height;
	//静态成员变量->类内声明，类外初始化
	static int m_age;
private:
	void Sfunc()
	{
		cout << "Sfunc running" << endl;
	}
	static int m_weight;
	
};
	int person::m_age = 18;
	int person::m_weight = 50;
void test6()
{
	person p1;
	//通过对象访问静态成员变量
	cout << "static int m_age=" << p1.m_age << endl;
	//通过类名访问静态成员变量
	cout << "static int m_age=" << person::m_age << endl;
	//静态成员变量不属于任何一个对象 他在程序编译时分配空间 
	//类名与之相同的所有对象均可访问
	person p2;
	p2.m_age = 20;
	cout << "p1.m_age=" <<p1.m_age << endl;
	//静态成员变量依旧有访问权限控制
	//p2.m_weight = 100;

	//通过对象访问静态成员函数
	p2.func();
	//通过类名访问静态成员函数
	person::func();

	//静态成员函数依旧有访问权限控制
	//p2.Sfunc();
	
	//在c++中，类内的成员变量和成员函数分开存储
	//只有非静态成员变量才在类的对象上
	cout <<"size of person:" << sizeof(person) << endl;
	class ClassTest
	{

	};
	//空类占一个字节->因为C++编译器会给每一个对象分配至少一个字节的空间来区分对象所占的内存位置
	cout << "size of ClassTest:" << sizeof(ClassTest) << endl;
}

//this指针->它指向被调用的成员函数所属的对象
//this指针隐含在每一个非静态成员函数中，无需单独创建
class ClassTest
{
public:
	//this指针可用于形参与成员同名时做区分
	void AddCount(int count)
	{
		//count+=count;//是将形参+=形参而不是将成员变量+=形参
		this->count += count;
	}
	//this指针可做返回值以返回对象本身
	ClassTest& ProAddcount(int n)
	{
		count += n;
		return *this;
	}
	
	//但返回类型不是引用的话
	ClassTest NewAddcount(int n)
	{
		count += n;
		return *this;
	}
	int count=0;
};

void test7()
{
	ClassTest c1;
	c1.count = 0;
	c1.AddCount(10);
	cout << "count=" << c1.count << endl;
	//链式编程思想
	/*c1.ProAddcount(10).ProAddcount(10).ProAddcount(10);
	cout << "count=" << c1.count << endl;*/

	//不用引用的话return *this 将会复制一个一模一样新对象
	c1.NewAddcount(10).NewAddcount(10).NewAddcount(10);
	//这行代码实际上是：c1.ProAddcount(10)之后返回一个新的匿名对象
	//接着将调用这个匿名对象的.ProAddcount(10)然后返回又一个新的匿名对象...
	//因此打印c1.count时count就加了一次10 与上面的引用大为不同
	
	cout << "count=" << c1.count << endl;
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	test7();
	return 0;
}