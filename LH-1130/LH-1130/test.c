#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int num = 0;
	int count = 0;
	printf("������num��ֵ��\n");
	scanf("%d", &num);
	while (num ) {
		num = num & (num - 1);
		count++;
	}
	printf("���������Ʊ�ʾ��1�ĸ���Ϊ��%d\n", count);
    system("pause");
    return 0;
}