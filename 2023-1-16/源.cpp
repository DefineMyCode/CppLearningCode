//��ĳ�ʼ��������
//1.���캯��
//2.��������
#include <iostream>
using namespace std;

class Person
{
public:
	//û�в����Ĺ��캯��
	Person()
	{
		cout << "Ĭ�ϵĹ��캯��" << endl;
		age = 0;
	}
	//�вεĹ��캯��
	//��Ҫд������Ĭ��ֵ
	Person(int n)
	{
		cout << "�вεĹ��캯��" << endl;
		age = n;
	}
	//�������캯��
	Person(const Person &pn)
	{
		age = pn.age;
		cout << "�������캯��" << endl;
	}
	//��������
	~Person()
	{
		cout << "��������" << endl;
	}


	int age;
};

//���ù��캯��
void test1()
{
	//����Ĭ�Ϲ��캯��
	//1.���ŷ�
	Person p1;
	cout << "p1.age=" << p1.age << endl;
	//ע�⣺��Ҫ��p1���() ����������ΪPerson p1();��һ����������
	//�����вεĹ���
	Person p2(20);
	cout << "p2.age=" << p2.age << endl;
	//���ÿ�������
	Person p3(p2);
	cout << "p3.age=" << p3.age << endl;
	//2.��ʽ��
	Person p4 = Person(18);
	cout << "p4.age=" << p4.age << endl;
	//����һ���������� �ص㣺��ǰ��ִ�н�����,ϵͳ���������յ���������
	//Person(18);
	
	Person p5 = Person(p3);
	cout << "p5.age=" << p5.age << endl;
	//3.��ʽת����
	Person p6 = 16;
	cout << "p6.age=" << p6.age << endl;
	Person p7 = p6;
	cout << "p7.age=" << p7.age << endl;
	
}


//ʲôʱ�����ÿ�������
void T2testin(Person p)
{
	cout << "����test()" << endl;
}
Person T2testout()
{
	Person p1(18);
	return p1;
}

void test2()
{
	//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
	//Person p1(10);
	//Person p2(p1);
	//2.ֵ���ݵķ�ʽ������������ֵ
	//T2testin(p1);
	//3.��ֵ��ʽ���ؾֲ�����
	T2testin(T2testout());
}

//�����ǳ����
void test3()
{
	class people
	{
	public:
		
		people()
		{
			cout << "Ĭ�Ϲ��캯��" << endl;
			age = 0;
			hight = NULL;
		}
		people(int inage,int inhight)
		{
			cout << "��������" << endl;
			age = inage;
			hight = new int(inhight);
		}
		//people(const people& p)
		//{
		//	cout << "����(ǳ)����" << endl;
		//	age = p.age;
		//	hight = p.hight;//ǳ����->ֱ�ӽ������ø�ֵ�ķ�ʽ������Ŀ�������
		//	//ǳ�������ܻᵼ�¶��������ݱ��ظ��ͷŵ��³�����
		//}

		//���
		people(const people& p)
		{
			cout << "����(��)����" << endl;
			age = p.age;
			hight = new int(*p.hight);
		}
		
		~people()
		{
			cout << "��������" << endl;
			delete hight;
		}
		int age;
		int* hight;
	};
	people p1(18,180);
	cout << "p1.age=" << p1.age << " p1.hight=" << p1.hight << " *p1.hight=" << *p1.hight << endl;
	people p2(p1);
	cout << "p2.age=" << p2.age << " p2.hight=" << p2.hight << " *p2.hight=" << *p2.hight << endl;
	//������ֻҪ���ڶ������ٿռ䣬�����Ǿ�Ӧ��Ҫ������Ӷ�����ǳ�����������ظ��ͷ�����
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}