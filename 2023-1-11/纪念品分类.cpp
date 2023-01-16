//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int w, n;
//	cin >> w >> n;
//	int* a = new int[n+1];
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	sort(a + 1, a + n + 1);
//	int ans = 0;
//	int l = 1, r = n;
//	while (l <= r) {
//		if (a[l] + a[r] <= w && l != r) {
//			ans++;
//			r--;
//			l++;
//		}
//		else {
//			ans++;
//			r--;
//		}
//	}
//	cout << ans;
//
//	return 0;
//}
