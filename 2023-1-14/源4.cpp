//#include <iostream>
//using namespace std;
//int main()
//{
//	for (int i = 1; i <= 9; i++) 
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j << "*" << i << '=' << i * j << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	for (int i = 2; i <= 100; i++)
//	{
//		int j=2;
//		for (; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j >= i)
//			cout << i << endl;
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	if (a > b)
//		cout << a<< '>' <<b << endl;
//	else if (a == b)
//		cout << a << '=' << b << endl;
//	else
//		cout << a << '<' << b << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	for (int i = 1; i <= 6; i++)
//	{
//		for (int j = i; j > 1; j--)
//			cout << ' ';
//		for (int j = 1; j <= i; j++)
//			cout << '*';
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	for(int i=2;i>=0;i--)
//		for (int j = 59; j >=0; j--)
//		{
//			cout << i << ':' << j << endl;
//			Sleep(1000);
//		}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	const char* cp = "Hello World";
//	if (cp && *cp)
//		cout << 1 << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int i = 1;
//	while (i <= 5)
//	{
//		int j = 1;
//		while (j <= i)
//		{
//			cout << i << ' ';
//			j++;
//		}
//		cout << endl;
//		i++;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int count = 1;
//	for (int d = 9; d >= 1; d--)
//	{
//		count = (count + 1) * 2;
//	}
//	cout << "第一天摘了" << count << "个桃子" << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int a, b;
//	a = m; b = n;
//	int r = m % n;
//	while (r > 0)
//	{
//		m = n;
//		n = r;
//		r = m % n;
//	}
//	cout << a << ',' << b << "的最大公约数为：" << n;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	for (int i = 0; i < 10; i++)
//		for (int j = 0; j < 10; j++)
//			cout << i << ' ' << j << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cout << "请输入两个整数：" << endl;
//	cin >> a >> b;
//	if (a > b)
//	{
//		for (int i = a; i >= b; i--)
//			cout << i << ' ';
//		cout << endl;
//	}
//	else
//	{
//		for (int i = a; i <= b; i++)
//			cout << i << ' ';
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int count = 0,tmp=n;
//	while (n>0)
//	{
//		n =n-n/2-2;
//		count++;
//	}
//	cout << tmp << "个西瓜会在" << count << "天后卖完" << endl;
//	return 0;
//}

#include <iostream>
using namespace std;
int main()
{
	cout << (3 | 5) << endl;
	return 0;
}

//#include <iostream>
//using namespace std;
//int main()
//{
//
//	return 0;
//}