#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int letter = 0;
	int space = 0;
	int digit = 0;
	int character = 0;
	char c;
	printf("��������һЩ�ַ�: ");
	while ((c = getchar()) != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			++letter;
		}
		else if (c == ' ') {
			++space;
		}
		else if (c >= '0' && c <= '9') {
			++digit;
		}
		else {
			++character;
		}
	}
	printf("Ӣ����ĸ�ĸ���Ϊ:%d\n", letter);
	printf("�ո�ĸ���Ϊ:%d\n", space);
	printf("���ֵĸ���Ϊ:%d\n", digit);
	printf("�����ַ��ĸ���Ϊ:%d\n", character);
	system("pause");
	return 0;
}