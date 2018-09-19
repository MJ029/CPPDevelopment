#include <iostream>
#include <cstdio>
#include <windows.h>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
	int max = 0;
	if (a > max) {
		max = a;
	}
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	if (d > max) {
		max = d;
	}
	return max;
}

// Before running the program change func_main to main
int func_main() {
	int a, b, c, d;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);
	Sleep(1000);
	return 0;
}