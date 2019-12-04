#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void PrintNum(int n) {
	if (n > 9) {
		PrintNum(n / 10);
	}
	printf("%d  ", n % 10);
}
int  main(void) {
	int n = 0;
	printf("«Î ‰»Înµƒ÷µ£∫");
	scanf("%d", &n);
	PrintNum(n);
	system("pause");
	return 0;
} 