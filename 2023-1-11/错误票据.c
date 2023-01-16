#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int a[100001];
	for (int i = 0; i < 100001; i++) {
		a[i] = 0;
	}
	int t;
	int min = 100001;
	int max = 0;
	int n;
	scanf("%d", &n);
	for (int i = 0; i <= n; ) {
		t = getchar();
		if (t >= '0' && t <= '9') {     
			ungetc(t, stdin);
			scanf("%d", &t);
			a[t]++;
			if (t < min) {
				min = t;
			}
			if (t > max) {
				max = t;
			}
		}
		else if (t == '\n') {
			i++;
		}
	}
	for (int i = min; i < max + 1; i++) {
		if (a[i] == 0) {
			printf("%d ", i);
		}
		if (a[i] == 2) {
			printf("%d\n", i);
		}
	}
	return 0;
}