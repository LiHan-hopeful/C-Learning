#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void Hanoi(int n, char A, char B, char C) {
	if (n == 1) {
		printf("%c-->%c\n", A, C);
	}
	else {
		Hanoi(n - 1, A, C, B);
		printf("%c-->%c\n", A, C);
		Hanoi(n - 1, B, A, C);
	}
}

int main() {
	char A = 'A';
	char B = 'B';
	char C = 'C';
	int n = 0;
	printf("请输入移动盘子的个数：\n");
	scanf("%d", &n);
	printf("移动%d个盘子的步骤是：\n", n);
	Hanoi(n, A, B, C);
    system("pause");
    return 0;
}