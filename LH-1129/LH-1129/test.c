#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int sum = 0;
	for (i = n; i; i /= 10) {
		sum = sum * 10 + i % 10;
	}
	if (sum == n) {
		printf("是回文数！\n");
	}
	else 
		printf("不是回文数！\n");
	
    system("pause");
    return 0;
}