#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int DigitSum(int n) {
	if (n >= 0 && n < 10) {
		return n;
	}
	return DigitSum(n / 10) + DigitSum(n % 10);
}

int main() {
	int n = 0;
	printf("������һ���Ǹ�������\n");
	scanf("%d", &n);
	printf("�����������֮���ǣ�%d\n", DigitSum(n));
	system("pause");
	return 0;
}