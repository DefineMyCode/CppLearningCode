#include <iostream>

using namespace std;

int main()
{
	//new 和 delete 关键字
	//new其实算是简洁版calloc (开辟在堆区) delete算是free
	//1.new返回的是该数据类型的指针
	//2.要释放new开辟的空间delete就行了

	//new 数据类型 (初始值)
	int* num =new int(10);
	cout << *num << endl;
	delete num;
	//cout << *num << endl;
	//不要访问已被 delete 的数据！！！

	//new开辟数组

	int* arr1 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	//释放数组得加上[]
	delete[] arr1;

	int(*arr)[10] = new int[10][10]{1,2,3,4,5,6,7,8,9,0};
	delete[] arr;

	//
	return 0;
}