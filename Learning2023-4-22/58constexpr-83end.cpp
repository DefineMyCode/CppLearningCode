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
	////const char* cstr ������ô���
	////cstr = nullptr;
	//const pstring* ps=&cstr;
	//auto a = 0.0;
	//auto b = 10, flag = 1.1;//һ���������ֻ������һ������
	//int a = 10, & ten = a;
	//auto b = ten;//b��һ��������������
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
	////decltype((i)) d;//d���������
	//decltype((r)) e=i;
	// 
	//int a = 3, b = 4;
	//decltype(a) c = a;
	//decltype((b)) d = a;
	//++c;//c=4
	//++d;//a=4 b=4 c=4 d=4
	//cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
	//int a, b;
	//decltype(a = b) c;//c��һ������
	//int a = 3, b = 4;
	//decltype(a) c = a;//c=3
	//decltype(a = b) d = a;//d����a d=3
	//cout << c << ' ' << d << endl;
	////decltype �� auto һ�µ�����
	////auto m = a;decltype(a) n = a;
	//auto m = 1 + 1;decltype(1 + 1) n = 1 + 1;
	//int i = 10, & ri = i;
	//int* p = &i;const int* ci = &i;const int* const ccpi = &i;
	//auto x = p;auto y = ci;auto z = ccpi;
	//decltype(p) x1 = p;decltype(ci) y1 = ci;
	////��ͬ decltype������Զ���const
	//decltype(ccpi) z1 = ccpi;
	////��ͬauto�Ὣ���ý���Ϊ���ö���Ļ�������
	//auto x2 = ri;decltype(ri) x3=ri;
	////��ͬauto����Ϊint decltype����Ϊint& 
	//auto y2 = *p;decltype(*p) y3=i;
	////������������
	//int i;
	//cin >> i;
	//cout << i << endl;
	//string word;
	//while (cin >> word)//��ȡ�����һ������
	//{
	//	cout << word << endl;
	//}
	//string line;
	////while (getline(cin, line))//��ȡһ�а���tab�Ϳո񵫲���������
	////{
	////	cout << line << endl;
	////}
	//while (getline(cin, line))//��ȡһ�е�һ��ֻ�л���ʱ�����
	//{
	//	if (!line.empty())
	//		cout << line << endl;
	//}
	//string s1, s2;
	//s1 = "12345";
	//s1 += s1;cout << s1 << endl;
	//s2 = s1;s2 += "this is a test\n";
	//s2 = "sadfa" +"hi" + s1;//���ܽ������ַ�������ֵ���
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
	//�������ÿ���ַ����ϲ���һ�����ַ������ÿո�ָ�
	//string maxstr, str;
	//while (cin >> str) {
	//	if (!str.empty()) {
	//		maxstr += ' ' + str;
	//	}
	//}
	//cout << maxstr << endl;

	//string str("who are you today?");//���str�е�ÿ���ַ�������
	//for (auto c : str) {
	//	cout << c << endl;
	//}
	string str("hello world!!!!");
	//decltype(str.size()) punct_cnt = 0;
	//for (auto c : str) {//ͳ��str���ж��ٸ�������
	//	if (ispunct(c))//ͷ�ļ�cctype
	//		++punct_cnt;
	//}
	//cout << punct_cnt << endl;
	//��strÿ���ַ���Ϊ��д
	for (auto& c : str) {//c��str��ÿ���ַ�������
		c = toupper(c);
	}
	cout << str << endl;
	//��Χfor(range for)
	//for(declaration : expression)
	//	  statement
	//expression������һ���������ڱ�ʾһ������
	//declaration���ָ�����һ���������ı����������ڷ��������еĻ���Ԫ�ء�
	//ÿ�ε���,declaration���ֵı����ᱻ��ʼ��Ϊexpression���ֵ���һ��Ԫ��ֵ��
	return 0;
}