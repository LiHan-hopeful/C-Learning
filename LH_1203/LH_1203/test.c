#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int DigitSum(int n) {
	if (n >= 0 && n < 10) {
		return n;
	}
	return DigitSum(n / 10) + DigitSum(n % 10);
}

int main() {
	int n = 0;
	printf("请输入一个非负整数：\n");
	scanf("%d", &n);
	printf("组成它的数字之和是：%d\n", DigitSum(n));
	system("pause");
	return 0;
}