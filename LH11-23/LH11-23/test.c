#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void Print(int n) {
	printf("%d*%d�ĳ˷��ھ���\n", n, n);
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%-5d", j, i, j*i);
		}
		printf("\n");
	}
}

int main() {
	int n = 0;
	printf("������һ������\n");
	scanf("%d", &n);
	Print(n);
	system("pause");
	return 0;
}