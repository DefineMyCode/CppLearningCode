#include <iostream>

using namespace std;

void my_swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

//new �� delete �ؼ���
void new_delete()
{
	//new��ʵ���Ǽ���calloc (�����ڶ���) delete����free
	//1.new���ص��Ǹ��������͵�ָ��
	//2.Ҫ�ͷ�new���ٵĿռ�delete������

	//new �������� (��ʼֵ)
	int* num = new int(10);
	cout << *num << endl;
	delete num;
	//cout << *num << endl;
	//��Ҫ�����ѱ� delete �����ݣ�����

	//new��������

	int* arr1 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	//�ͷ�����ü���[]
	delete[] arr1;

	int(*arr)[10] = new int[10][10]{ 1,2,3,4,5,6,7,8,9,0 };
	delete[] arr;

	//�ͷŶ�ά���ά���黹��̫���
}

//����
void cite()
{
	//����
	//�﷨����������& ����=�����ñ���
	int a = 10;
	//���ñ����ʼ��(�������γ���) ���ò����Ը���
	int& b = a;
	cout << b << endl;
	b = 30;
	cout << b << endl;
	cout << "a�ĵ�ַ��" << &a << endl;
	cout << "b�ĵ�ַ��" << &b << endl;
	//���ó�������const����
	const int& one = 1;
	//����--��������
	int n1 = 1;
	int n2 = 2;
	my_swap(n1, n2);
	cout << "������n1=" << n1 << endl;
	cout << "������n2=" << n2 << endl;
}

int sum(int x = 0, int y = 0, int z = 0);

//�����е�Ĭ��ֵ
void FuncDefault()
{	
	int a, b, c;
	a = b = c = 2;
	cout << "û�и�����ʱ����sum=" << sum() << endl;
	cout << "sum("<<a<<","<<b<<","<<c<<")ʱsum=" << sum(a, b, c) << endl;
	//ע�����
	//1.������һ������Ĭ��ֵʱ����ÿһ������Ҳ�ø�Ĭ��ֵ
	//2.�����������ͳ�ʼ��ֻ����һ��������дĬ��ֵ 
	//һ�㶨�岻дĬ��ֵ ����дĬ��ֵ
}

//��
void Class()
{
	class Student
	{
	//public    ����Ȩ��  ���ں����ⶼ�ɷ���
	//protected ����Ȩ��  ���ڿɷ������ⲻ�ɷ��� �ӿɷ���
	//private   ˽��Ȩ��  ���ڿɷ������ⲻ�ɷ��� �Ӳ��ɷ��� (���Ĭ��Ȩ��)
		
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
			cout << "������" << name << endl;
			cout << "���䣺" << age << endl;
		}
	public:
		string name;
		int age=0;
	};

	Student s1;
	s1.SetName("�˳��p");
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