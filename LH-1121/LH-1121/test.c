#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ݹ�ʵ��
int Fib(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}
	return Fib(n - 1) + Fib(n - 2);
}
//�ǵݹ�ʵ��
int Fib2(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}
	int last1 = 1;
	int last2 = 1;
	int current = 0;
	for (int i = 3; i <= n; i++) {
		current = last1 + last2;
		last2 = last1;
		last1 = current;
	}
	return current;
}
int main() {
	int num = 0;
	printf("��������Ҫ���������\n");
	scanf("%d", &num);
	printf("��%d������ֵΪ��%d\n", num, Fib(num));
	//printf("��%d������ֵΪ��%d\n", num, Fib2(num));
    system("pause");
    return 0;
}