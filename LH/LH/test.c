#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int i = 0;
	for (; i < 3; i++) {
		printf("���������룺");
		char password[1024] = { 0 };
		scanf("%s", &password);
		if (strcmp(password, "888888") == 0) {
			printf("��½�ɹ���\n");
			break;
		}
		else {
			printf("����������������\n");
		}
	}
	if (i == 3) {
		printf("��½ʧ�ܣ�\n");
	}
	system("pause");
	return 0;
}