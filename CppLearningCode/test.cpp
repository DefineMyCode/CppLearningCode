#include <iostream>

using namespace std;

void my_swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

//new 和 delete 关键字
void new_delete()
{
	//new其实算是简洁版calloc (开辟在堆区) delete算是free
	//1.new返回的是该数据类型的指针
	//2.要释放new开辟的空间delete就行了

	//new 数据类型 (初始值)
	int* num = new int(10);
	cout << *num << endl;
	delete num;
	//cout << *num << endl;
	//不要访问已被 delete 的数据！！！

	//new开辟数组

	int* arr1 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	//释放数组得加上[]
	delete[] arr1;

	int(*arr)[10] = new int[10][10]{ 1,2,3,4,5,6,7,8,9,0 };
	delete[] arr;

	//释放二维或多维数组还不太清楚
}

//引用
void cite()
{
	//引用
	//语法：引用类型& 别名=被引用变量
	int a = 10;
	//引用必须初始化(函数传参除外) 引用不可以更改
	int& b = a;
	cout << b << endl;
	b = 30;
	cout << b << endl;
	cout << "a的地址：" << &a << endl;
	cout << "b的地址：" << &b << endl;
	//引用常量得用const修饰
	const int& one = 1;
	//引用--函数传参
	int n1 = 1;
	int n2 = 2;
	my_swap(n1, n2);
	cout << "交换后n1=" << n1 << endl;
	cout << "交换后n2=" << n2 << endl;
}

int sum(int x = 0, int y = 0, int z = 0);

//函数中的默认值
void FuncDefault()
{	
	int a, b, c;
	a = b = c = 2;
	cout << "没有给参数时调用sum=" << sum() << endl;
	cout << "sum("<<a<<","<<b<<","<<c<<")时sum=" << sum(a, b, c) << endl;
	//注意事项：
	//1.当给了一个参数默认值时其后的每一个参数也得给默认值
	//2.函数的声明和初始化只能有一个可以用写默认值 
	//一般定义不写默认值 声明写默认值
}

//类
void Class()
{
	class Student
	{
	//public    公共权限  类内和类外都可访问
	//protected 保护权限  类内可访问类外不可访问 子可访问
	//private   私有权限  类内可访问类外不可访问 子不可访问 (类的默认权限)
		
	public:
		void SetName(string str)
		{
			name = str;
		}

		void SetAge(int x)
		{
			age = x;
		}

		void Show()
		{
			cout << "姓名：" << name << endl;
			cout << "年龄：" << age << endl;
		}
	public:
		string name;
		int age=0;
	};

	Student s1;
	s1.SetName("邓崇雙");
	s1.SetAge(18);
	s1.Show();
}


int main1()
{
	//new_delete();
	//cite();
	//FuncDefault();
	Class();
	return 0;
}

int sum(int x, int y, int z)
{
	return x + y + z;
}