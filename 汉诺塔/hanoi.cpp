#include <iostream>
using namespace std;

void move(char cource, char dest)
{
	cout << cource << "->" << dest << endl;
}

//x->���ӵĸ��� cource->��Ҫ�ƶ����ӵ����� middle->�м�����õ����� dest->�����ƶ���������
void hanoi(int x, char cource, char middle, char dest)
{
	if (x == 0)
		return;
	if (x == 1)
	{
		move(cource, dest);
		return;
	}
	hanoi(x - 1, cource, dest, middle);
	move(cource, dest);
	hanoi(x - 1, middle, cource, dest);
}

int main()
{
	hanoi(3, 'A', 'B', 'C');
	return 0;
}