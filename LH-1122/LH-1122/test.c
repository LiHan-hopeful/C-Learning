#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//通过使用递归函数实现求n的阶乘。
int Factor(int num) {
	if (num == 1) {
		return 1;
	}
	return num * Factor(num - 1);
}

int main() {
	printf("请输入您想要求阶乘的数：");
	int num = 0;
	scanf("%d", &num);
	printf("%d的阶乘为：%d\n", num, Factor(num));
    system("pause");
    return 0;
}
