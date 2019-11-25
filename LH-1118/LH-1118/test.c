#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a = 0;
	int num = 0;
	int sum = 0;
	printf("请输入一个整数(0-9)\n");
	scanf("%d", &num);
	for (int i = 0; i < 5; i++) {
		a = a * 10 + num;
		sum += a;
	}
	printf("您输入的数的前五项之和为: %d\n", sum);
	system("pause");
	return 0;
}