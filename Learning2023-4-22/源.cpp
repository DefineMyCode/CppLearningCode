#include <iostream>
#include <string>

using namespace std;
int i = 0, j = 2;
//struct Foo {    }
//struct Sales_data {
//	std::string book_name;
//	unsigned units_sold = 0;
//	double revenue = 0.0;
//};
int main()
{
	//int a = 10;
	//
	//const int* p = &a;
	//constexpr int* q = nullptr;
	//constexpr const int* p = &i;
	//constexpr int* p1 = &j;
	//int null = 0, * p = (int*)null;
	//int a = 10, b = a;
	//typedef char* pstring;
	//char ch = 'a';
	//const pstring cstr = &ch;
	////const char* cstr 不能这么理解
	////cstr = nullptr;
	//const pstring* ps=&cstr;
	//auto a = 0.0;
	//auto b = 10, flag = 1.1;//一条声明语句只能声明一种类型
	//int a = 10, & ten = a;
	//auto b = ten;//b是一个变量而非引用
	//b = 0;
	//cout << a << endl;

	//int i = 0,&r=i;
	//auto a = r;
	//const int ci = i, & cr = ci;
	//auto b = ci;
	//auto c = cr;
	//auto d = &i;
	//auto e = &ci;
	//auto& g = ci;
	////auto& h = 42;
	//const auto& j = 42;
	//a = 42;b = 42;c = 42;
	//const int i = 42;
	//auto j = i;
	//j = 10;
	//const  auto& k = i;
	////k = 10;
	//auto* p = &i;
	//
	//const auto j2 = i, & k2 = i;
	//
	//decltype(i) a=10;
	//decltype(j) b;
	//decltype(k) c = j;
	//int i = 42, * p = &i, & r = i;
	//decltype(r + 0) b;
	//decltype(*p) c=i;
	////decltype((i)) d;//d变成了引用
	//decltype((r)) e=i;
	// 
	//int a = 3, b = 4;
	//decltype(a) c = a;
	//decltype((b)) d = a;
	//++c;//c=4
	//++d;//a=4 b=4 c=4 d=4
	//cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
	//int a, b;
	//decltype(a = b) c;//c是一个引用
	//int a = 3, b = 4;
	//decltype(a) c = a;//c=3
	//decltype(a = b) d = a;//d引用a d=3
	//cout << c << ' ' << d << endl;
	////decltype 和 auto 一致的例子
	////auto m = a;decltype(a) n = a;
	//auto m = 1 + 1;decltype(1 + 1) n = 1 + 1;
	//int i = 10, & ri = i;
	//int* p = &i;const int* ci = &i;const int* const ccpi = &i;
	//auto x = p;auto y = ci;auto z = ccpi;
	//decltype(p) x1 = p;decltype(ci) y1 = ci;
	////不同 decltype不会忽略顶层const
	//decltype(ccpi) z1 = ccpi;
	////不同auto会将引用解释为引用对象的基本类型
	//auto x2 = ri;decltype(ri) x3=ri;
	////不同auto解释为int decltype解释为int& 
	//auto y2 = *p;decltype(*p) y3=i;
	////。。。。。。
	
	return 0;
}