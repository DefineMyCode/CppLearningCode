//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int* nums = new int[n];
//	for (int i = 0; i < n; i++)
//		cin >> nums[i];
//	//Ñ¡ÔñÅÅĞò
//	for (int i = 0; i < n - 1; i++)
//	{
//		int tip = i;
//		for (int j = i+1; j < n; j++)
//		{		
//			if (nums[tip] > nums[j])
//				tip = j;
//		}
//		if (tip != i)
//		{
//			int tmp = nums[tip];
//			nums[tip] = nums[i];
//			nums[i] = tmp;
//		}
//	}
//	//Êä³ö
//	for (int i = 0; i < n; i++)
//		cout << nums[i] << ' ';
//	return 0;
//}