#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;
int main()
{
	//string s("what are you doing?");
	////将字符串的第一个字母改为大写
	//if (!s.empty()) {
	//	s[0]=toupper(s[0]);
	//}
	//cout << s << endl;

	////将第一个单词的字母全部大写                        空字符:空格 tab
	//for (decltype(s.size()) index = 0;index < s.size() && !isspace(s[index]);index++) {
	//	s[index] = toupper(s[index]);
	//}
	//cout << s << endl;

	//使用范围for将字符串中的所有字符替换为X
	//cout << "before:" << s << endl;
	/*for (auto& c : s) {
		c = 'X';
	}*/
	/*for (char& c : s) {
		c = 'X';
	}*/
	/*for (char c : s) {
		c = 'X';
	}*/
	//cout << "after:" << s << endl;
	//string s1;
	//cout << s1[0] << endl;//不能对空string进行下标访问

	//除去字符串中的标点符号
	//string str;
	//cout << "enter a string:" << endl;
	//getline(cin, str);
	//cout << "before string:\n" << str << endl;
	//if (!str.empty()) {
	//	string tmp;
	//	for (auto c : str) {
	//		if (!ispunct(c))
	//			tmp += c;
	//	}
	//	str = tmp;
	//}
	//cout <<"after delete punctuation:\n" << str << endl;

	//const string cs = "Keep out!";
	////const char* cs = "Keep out!";
	//for (auto& c : cs) {
	//	cout << c << endl;
	//}
	// 
	//vector<int> iv{ 1,2,4,5 };//列表初始化
	//vector<int> iv1(1, 2, 4, 5);//不合法的初始化

	//vector<string> svec(5, "hi");//svec初始化为5个字符串"hi"
	////编译器会将其解释为将对象10拷贝给ivec，显然不正确
	////vector<int> ivec = 10;//只能用直接初始化的形式指定vector(向量)大小
	//vector<int> ivec(10);//初始10个元素每个元素为0 
	//vector<string> v1{ "hi" };//一个元素"hi"
	//vector<string> v2{ 10 };//10个空字符串
	//vector<string> v3{ 10,"hi" };//10个"hi"
	////当列表中的元素不能直接用来初始化容器
	////中的元素时，编译器会尝试用默认值初始vector对象
	////vector<string> v4{ 10,1 };//报错，string中不存在这样的构造函数

	//vector<vector<int>> ivec;
	////vector<string> svec = ivec;//不能将存储不同元素的vector进行赋值
	//vector<string> svec(10, "null");

	//将输入的每个单词插入到vector中
	//string word;
	//vector<string> test;
	//while (cin >> word) {
	//	test.push_back(word);
	//}

	//int tmp;
	//vector<int> ivec;
	//while(cin>>tmp){
	//	ivec.push_back(tmp);
	//}

	//将vector中的每个元素改为其对应的平方
	//vector<int> v{ 1,2,3,4,5,6,7,8 };
	//for (auto& i : v) {
	//	i *= i;
	//}
	//for (auto i : v) {
	//	cout << i << ' ';
	//}
	//cout << endl;

	//要使用size_type，需要首先指定它是由哪种类型定义的。
	//vector对象的类型总是包含着元素的类型
	//vector<int>::size_type index;//正确
	//vector::size_type index;//错误

	//100分制划分为0-9 10-19 20-29 ... 90-99 100 十一个分段
	//vector<unsigned> scores(11, 0);
	//unsigned grade;
	//while (cin >> grade) {
	//	if (grade <= 100)
	//		++scores[grade / 10];
	//}
	//for (auto sco : scores) {
	//	cout << sco << ' ';
	//}
	//cout << endl;

	//不能用下标来向vector中添加元素
	//vector<int> arr;
	//for (decltype(arr.size()) index = 0;index < 10;index++) {
	//	arr[index] = index;//严重的错误：arr中不包含任何一个元素
	//  arr.push_back(index);//正确
	//}
	
	//读入一组整数并输出相邻元素的和
	vector<int> nums;
	int x;
	while (cin >> x) {
		nums.push_back(x);
	}
	decltype(nums.size()) n = nums.size();
	//for (decltype(nums.size()) i = 0;i < n;i++) {
	//	if (i == 0) {
	//		cout << nums[i] + nums[i + 1] << endl;
	//	}
	//	else if (i == nums.size() - 1) {
	//		cout << nums[i - 1] + nums[i] << endl;
	//	}
	//	else {
	//		cout << nums[i - 1] + nums[i] + nums[i + 1] << endl;
	//	}
	//}

	//这次输出第一个和最后一个的和 第二个和倒数第二个的和
	for (decltype(nums.size()) i = 0;i < n/2;i++) {
		cout << nums[i] + nums[n - 1 - i] << ' ';
	}
	if (n % 2 != 0) {
		cout << nums[n / 2] * 2 << endl;
	}
	cout << endl;


	return 0;
}