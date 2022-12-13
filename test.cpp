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

int main()
{
	//new_delete();
	//cite();

	
	return 0;
}