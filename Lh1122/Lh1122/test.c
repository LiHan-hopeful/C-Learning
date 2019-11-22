#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//冒泡排序法。
int main() {
	int i = 0;
	int j = 0;
	int a[10] = { 0 };
	int tmp = 0; 
	printf("请输入10个数\n");
	for (; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 1; i < 10; i++) {
		for (j = 9; j >= i; j--) {
			if (a[j] < a[j - 1]) {
				tmp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (i=0; i < 10; i++) {
		printf("%d\n", a[i]);
	}
	printf("\n");
    system("pause");
    return 0;
}