#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//递归实现
int Factor1(int n) {
	if (n == 1) {
		return 1;
	}
	return n * Factor1(n - 1);
}

//非递归实现
int Factor2(int n) {
	int i = 1;
	if (n == 0) {
		return 1;
	}
	int sum = 1;
	while (i <= n) {
		sum *= i;
		i++;
	}
	return sum;
}

int  main(void) {
	int n = 0;
	printf("请输入n的值：");
	scanf("%d", &n);
	int result = Factor2(n);
	printf("%d 的阶乘为：%d\n", n, result);
	system("pause");
	return 0;
}//递归和非递归分别实现求n的阶乘 