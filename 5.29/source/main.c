#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, l;
	printf("Enter two numbers:");
	scanf("%d %d", &a, &b);

	l = 1;
	do {
		l++;
	} while (!(l%a == 0 && l%b == 0));
	printf("%d\n", l);

	system("pause");
	return 0;
}