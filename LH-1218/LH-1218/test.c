#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int  i = 0;
	int sum = 0;
	char str[20];
	printf("������һ��8������:\n");
	scanf("%s", str);
	int len = strlen(str);
	for (i = 0; i <= len - 1; i++) {
		sum = sum * 8 + str[i] - '0';
	}
	printf("�������8������ת��Ϊʮ����Ϊ\n%d\n", sum);
    system("pause");
    return 0;
}