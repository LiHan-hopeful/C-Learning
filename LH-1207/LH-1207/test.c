#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a = 0;
	int b = 0;
	int i = 0;
	while (1) {
		printf("����������2����(�Զ��ŷָ�)��\n");
		scanf("%d, %d", &a, &b);
		i = a % b;
		while (i != 0) {
			a = b;
			b = i;
			i = a % b;
		}
		printf("���������Լ��Ϊ��%d\n", b);
	}
	system("pause");
	return 0;
}