#include <iostream>
using namespace std;

class person
{
public:
	void ShowClassName()
	{
		cout << "class name:person" << endl;
	}
	void ShowAge()
	{
		if (this == NULL)
		{
			cout << "������NULL���� ���ܻ����δ���ٿռ�ĳ�Ա �ĺ���" << endl;
			return;
		}
		cout << "age:" << age << endl;
	}

	void AddAge()
	{
		age += 10;
	}

	//������
	void func1() const
	{
		//������ֻ���޸�mutable���εĳ�Ա
		//age = 10;
		cout << age << endl;
		m_num = 10;
	}
	int age=100;
	//mutable->�ɱ��
	mutable int m_num;
};
int main()
{
	person *p1=NULL;
	p1->ShowClassName();
	//�����ÿ�ָ�����this=NULL�ĺ���
	//������NULL���� ���ܻ����δ���ٿռ�ĳ�Ա �ĺ���
	p1->ShowAge();
	person p2;
	p2.func1();
	
	//������ ֻ�ܵ��ó����� �޸�mutable���εĳ�Ա
	const person p3=p2;
	p3.func1();
	p3.m_num = 100;
	cout << "m_num=" << p3.m_num << endl;
	return 0;
}