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

int main()
{
	//new_delete();
	//cite();

	
	return 0;
}