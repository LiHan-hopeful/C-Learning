#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Menu() {
	printf("=====================\n");
	printf("��ӭ������������Ϸ��\n");
	printf(" 1. ��ʾ��ʼ��Ϸ\n");
	printf(" 0. ��ʾ������Ϸ\n");
	printf("=====================\n");
	printf("����������ѡ��");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Game() {
	while (1) {
		int toGuess = rand() % 100 + 1;
		printf("���������µ����֣�1-100����");
		int num = 0;
		scanf("%d", &num);
		if (num < toGuess) {
			printf("����!\n");
		}
		else if (num > toGuess) {
			printf("����!\n");
		}
		else {
			printf("�¶���!\n");
			break;
		}
	}
}

int main() {
	srand((unsigned)time(NULL));
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 0) {
			printf("goodbye!\n");
			break;
		}
		else {
			printf("������������\n");
		}
	}
	system("pause");
	return 0;
}