#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int i = 0;
	for (; i < 3; i++) {
		printf("ÇëÊäÈëÃÜÂë£º");
		char password[1024] = { 0 };
		scanf("%s", &password);
		if (strcmp(password, "888888") == 0) {
			printf("µÇÂ½³É¹¦£¡\n");
			break;
		}
		else {
			printf("ÄúµÄÃÜÂëÊäÈëÓÐÎó£¡\n");
		}
	}
	if (i == 3) {
		printf("µÇÂ½Ê§°Ü£¡\n");
	}
	system("pause");
	return 0;
}