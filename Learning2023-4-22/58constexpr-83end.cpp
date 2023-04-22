#include <iostream>
#include <string>
#include <cctype>

using namespace std;

//using std::cin;
//using std::cout;
//using std::endl;
//int i = 0, j = 2;
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
	//int i;
	//cin >> i;
	//cout << i << endl;
	//string word;
	//while (cin >> word)//读取并输出一个单词
	//{
	//	cout << word << endl;
	//}
	//string line;
	////while (getline(cin, line))//读取一行包括tab和空格但不包括换行
	////{
	////	cout << line << endl;
	////}
	//while (getline(cin, line))//读取一行但一行只有换行时不输出
	//{
	//	if (!line.empty())
	//		cout << line << endl;
	//}
	//string s1, s2;
	//s1 = "12345";
	//s1 += s1;cout << s1 << endl;
	//s2 = s1;s2 += "this is a test\n";
	//s2 = "sadfa" +"hi" + s1;//不能将两个字符串字面值相加
	//cout << s2 << endl;
	//string line;
	//while (cin>>line)
	//{
	//	cout << line << endl;
	//}
	//string str1, str2;
	//getline(cin, str1);
	//getline(cin, str2);
	//if (str1.length() != str2.length()) {
	//	cout << (str1.length() > str2.length() ? str1 : str2) << endl;
	//}
	//将输入的每个字符串合并成一个新字符串并用空格分隔
	//string maxstr, str;
	//while (cin >> str) {
	//	if (!str.empty()) {
	//		maxstr += ' ' + str;
	//	}
	//}
	//cout << maxstr << endl;

	//string str("who are you today?");//输出str中的每个字符并换行
	//for (auto c : str) {
	//	cout << c << endl;
	//}
	string str("hello world!!!!");
	//decltype(str.size()) punct_cnt = 0;
	//for (auto c : str) {//统计str中有多少个标点符号
	//	if (ispunct(c))//头文件cctype
	//		++punct_cnt;
	//}
	//cout << punct_cnt << endl;
	//将str每个字符改为大写
	for (auto& c : str) {//c是str中每个字符的引用
		c = toupper(c);
	}
	cout << str << endl;
	//范围for(range for)
	//for(declaration : expression)
	//	  statement
	//expression部分是一个对象，用于表示一个序列
	//declaration部分负责定义一个变量，改变量将被用于访问序列中的基础元素。
	//每次迭代,declaration部分的变量会被初始化为expression部分的下一个元素值。
	return 0;
}