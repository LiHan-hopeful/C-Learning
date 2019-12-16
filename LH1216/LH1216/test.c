#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int num1 = 0;
	int num2 = 0;
	int ret = 0;
	int count = 0;
	printf("请输入两个整数：");
	scanf("%d%d", &num1, &num2);
	ret = num1 ^ num2;
	while (ret)
	{
		ret = (ret - 1) & ret;
		count++;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}