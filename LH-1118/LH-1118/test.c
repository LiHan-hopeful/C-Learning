#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a = 0;
	int num = 0;
	int sum = 0;
	printf("������һ������(0-9)\n");
	scanf("%d", &num);
	for (int i = 0; i < 5; i++) {
		a = a * 10 + num;
		sum += a;
	}
	printf("�����������ǰ����֮��Ϊ: %d\n", sum);
	system("pause");
	return 0;
}