//��ĳ�ʼ��������
//1.���캯��
//2.��������
#include <iostream>
#include <string>
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

//��ʼ���б�
void test4()
{
	class person
	{
	public:
		/*person()
		{
			age = 0;
			height = 0;
			weight = 0;
		}*/
		//��ʼ���б���ʽ��
		person() :age(0), height(0),weight(0)
		{
			//��������
		}
		/*person(int a,int b,int c)
		{
			age = a;
			height = b;
			weight = c;
		}*/
		//��ʼ���б���ʽ��
		person(int a, int b, int c) :age(a), height(b), weight(c)
		{
			//��������
		}
		void show()
		{
			cout << "age=" << age << " height=" << height << " weight=" << weight << endl;
		}
		int age;
		int height;
		int weight;
	};
	person p1;
	p1.show();
	person p2(1, 2, 3);
	p2.show();
}

//�����ڲ�������������
void test5()
{
	class person 
	{
	public:
		person() :name("��")
		{
			cout << "person��������" << endl;
		}
		~person()
		{
			cout << "person��������" << endl;
		}
		string name;
	};
	class room
	{
	public:
		room() :id(000) 
		{
			cout << "room��������" << endl;
		}
		~room()
		{
			cout << "room��������" << endl;
		}
		int id;
	};
	class home
	{
	public:
		home() :address("����")
		{
			cout << "home��������" << endl;
		}
		void show()
		{
			cout << "��ַ��" << address << endl;
			cout << "��������: " << older.name << endl;
			cout << "һ¥���䣺��ţ�" << first.id << endl;
		}
		~home()
		{
			cout << "home��������" << endl;
		}
		string address;
		person older;
		person younger;
		room first;
	};
	
	home h1;
	h1.show();
	//�ȹ�������еĶ����ٹ�������������෴
}

//��̬��Ա�����;�̬��Ա����(��̬��Ա)
//1.���ܶ����ں�������
class person
{
public:
	//��̬����
	//1.������һ������
	//2.ֻ�ܷ��ʾ�̬��Ա����
	static void func()
	{
		//cout << "m_height=" << m_height << endl;
		cout << "m_age=" << m_age << endl;
		cout << "func running" << endl;
	}
	/*void func2()
	{
		cout << "m_height=" << m_height << endl;
	}*/
	int m_height;
	//��̬��Ա����->���������������ʼ��
	static int m_age;
private:
	void Sfunc()
	{
		cout << "Sfunc running" << endl;
	}
	static int m_weight;
	
};
	int person::m_age = 18;
	int person::m_weight = 50;
void test6()
{
	person p1;
	//ͨ��������ʾ�̬��Ա����
	cout << "static int m_age=" << p1.m_age << endl;
	//ͨ���������ʾ�̬��Ա����
	cout << "static int m_age=" << person::m_age << endl;
	//��̬��Ա�����������κ�һ������ ���ڳ������ʱ����ռ� 
	//������֮��ͬ�����ж�����ɷ���
	person p2;
	p2.m_age = 20;
	cout << "p1.m_age=" <<p1.m_age << endl;
	//��̬��Ա���������з���Ȩ�޿���
	//p2.m_weight = 100;

	//ͨ��������ʾ�̬��Ա����
	p2.func();
	//ͨ���������ʾ�̬��Ա����
	person::func();

	//��̬��Ա���������з���Ȩ�޿���
	//p2.Sfunc();
	
	//��c++�У����ڵĳ�Ա�����ͳ�Ա�����ֿ��洢
	//ֻ�зǾ�̬��Ա����������Ķ�����
	cout <<"size of person:" << sizeof(person) << endl;
	class ClassTest
	{

	};
	//����ռһ���ֽ�->��ΪC++���������ÿһ�������������һ���ֽڵĿռ������ֶ�����ռ���ڴ�λ��
	cout << "size of ClassTest:" << sizeof(ClassTest) << endl;
}

//thisָ��->��ָ�򱻵��õĳ�Ա���������Ķ���
//thisָ��������ÿһ���Ǿ�̬��Ա�����У����赥������
class ClassTest
{
public:
	//thisָ��������β����Աͬ��ʱ������
	void AddCount(int count)
	{
		//count+=count;//�ǽ��β�+=�βζ����ǽ���Ա����+=�β�
		this->count += count;
	}
	//thisָ���������ֵ�Է��ض�����
	ClassTest& ProAddcount(int n)
	{
		count += n;
		return *this;
	}
	
	//���������Ͳ������õĻ�
	ClassTest NewAddcount(int n)
	{
		count += n;
		return *this;
	}
	int count=0;
};

void test7()
{
	ClassTest c1;
	c1.count = 0;
	c1.AddCount(10);
	cout << "count=" << c1.count << endl;
	//��ʽ���˼��
	/*c1.ProAddcount(10).ProAddcount(10).ProAddcount(10);
	cout << "count=" << c1.count << endl;*/

	//�������õĻ�return *this ���Ḵ��һ��һģһ���¶���
	c1.NewAddcount(10).NewAddcount(10).NewAddcount(10);
	//���д���ʵ�����ǣ�c1.ProAddcount(10)֮�󷵻�һ���µ���������
	//���Ž�����������������.ProAddcount(10)Ȼ�󷵻���һ���µ���������...
	//��˴�ӡc1.countʱcount�ͼ���һ��10 ����������ô�Ϊ��ͬ
	
	cout << "count=" << c1.count << endl;
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	test7();
	return 0;
}