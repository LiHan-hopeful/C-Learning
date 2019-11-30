#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int num = 0;
	int count = 0;
	printf("请输入num的值：\n");
	scanf("%d", &num);
	while (num ) {
		num = num & (num - 1);
		count++;
	}
	printf("该数二进制表示中1的个数为：%d\n", count);
    system("pause");
    return 0;
}