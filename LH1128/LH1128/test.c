#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Menu() {
	printf("=====================\n");
	printf("欢迎来到猜数字游戏！\n");
	printf(" 1. 表示开始游戏\n");
	printf(" 0. 表示结束游戏\n");
	printf("=====================\n");
	printf("请输入您的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Game() {
	while (1) {
		int toGuess = rand() % 100 + 1;
		printf("请输入您猜的数字（1-100）：");
		int num = 0;
		scanf("%d", &num);
		if (num < toGuess) {
			printf("低了!\n");
		}
		else if (num > toGuess) {
			printf("高了!\n");
		}
		else {
			printf("猜对了!\n");
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
			printf("您的输入有误！\n");
		}
	}
	system("pause");
	return 0;
}