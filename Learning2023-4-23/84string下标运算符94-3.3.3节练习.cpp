#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;
int main()
{
	//string s("what are you doing?");
	////���ַ����ĵ�һ����ĸ��Ϊ��д
	//if (!s.empty()) {
	//	s[0]=toupper(s[0]);
	//}
	//cout << s << endl;

	////����һ�����ʵ���ĸȫ����д                        ���ַ�:�ո� tab
	//for (decltype(s.size()) index = 0;index < s.size() && !isspace(s[index]);index++) {
	//	s[index] = toupper(s[index]);
	//}
	//cout << s << endl;

	//ʹ�÷�Χfor���ַ����е������ַ��滻ΪX
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
	//cout << s1[0] << endl;//���ܶԿ�string�����±����

	//��ȥ�ַ����еı�����
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
	//vector<int> iv{ 1,2,4,5 };//�б��ʼ��
	//vector<int> iv1(1, 2, 4, 5);//���Ϸ��ĳ�ʼ��

	//vector<string> svec(5, "hi");//svec��ʼ��Ϊ5���ַ���"hi"
	////�������Ὣ�����Ϊ������10������ivec����Ȼ����ȷ
	////vector<int> ivec = 10;//ֻ����ֱ�ӳ�ʼ������ʽָ��vector(����)��С
	//vector<int> ivec(10);//��ʼ10��Ԫ��ÿ��Ԫ��Ϊ0 
	//vector<string> v1{ "hi" };//һ��Ԫ��"hi"
	//vector<string> v2{ 10 };//10�����ַ���
	//vector<string> v3{ 10,"hi" };//10��"hi"
	////���б��е�Ԫ�ز���ֱ��������ʼ������
	////�е�Ԫ��ʱ���������᳢����Ĭ��ֵ��ʼvector����
	////vector<string> v4{ 10,1 };//����string�в����������Ĺ��캯��

	//vector<vector<int>> ivec;
	////vector<string> svec = ivec;//���ܽ��洢��ͬԪ�ص�vector���и�ֵ
	//vector<string> svec(10, "null");

	//�������ÿ�����ʲ��뵽vector��
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

	//��vector�е�ÿ��Ԫ�ظ�Ϊ���Ӧ��ƽ��
	//vector<int> v{ 1,2,3,4,5,6,7,8 };
	//for (auto& i : v) {
	//	i *= i;
	//}
	//for (auto i : v) {
	//	cout << i << ' ';
	//}
	//cout << endl;

	//Ҫʹ��size_type����Ҫ����ָ���������������Ͷ���ġ�
	//vector������������ǰ�����Ԫ�ص�����
	//vector<int>::size_type index;//��ȷ
	//vector::size_type index;//����

	//100���ƻ���Ϊ0-9 10-19 20-29 ... 90-99 100 ʮһ���ֶ�
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

	//�������±�����vector�����Ԫ��
	//vector<int> arr;
	//for (decltype(arr.size()) index = 0;index < 10;index++) {
	//	arr[index] = index;//���صĴ���arr�в������κ�һ��Ԫ��
	//  arr.push_back(index);//��ȷ
	//}
	
	//����һ���������������Ԫ�صĺ�
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

	//��������һ�������һ���ĺ� �ڶ����͵����ڶ����ĺ�
	for (decltype(nums.size()) i = 0;i < n/2;i++) {
		cout << nums[i] + nums[n - 1 - i] << ' ';
	}
	if (n % 2 != 0) {
		cout << nums[n / 2] * 2 << endl;
	}
	cout << endl;


	return 0;
}