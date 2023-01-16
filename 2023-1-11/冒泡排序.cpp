//#include <iostream>
//using namespace std;
//int main()
//{
//	int n=10;
//	int* nums = new int[n];
//	//输入数据
//	for (int i = 0; i < n; i++)
//		cin >> nums[i];
//	for (int i = 0; i < n - 1; i++)
//	{
//		bool flag= true;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (nums[i] > nums[j])
//			{
//				flag = false;
//				int tmp = nums[i];
//				nums[i] = nums[j];
//				nums[j] = tmp;
//			}
//		}
//		if (flag)
//			break;
//	}
//	//输出
//	for (int i = 0; i < n; i++)
//		cout << nums[i] << ' ';
//	return 0;
//}