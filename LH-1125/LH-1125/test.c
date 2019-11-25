#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int i = 0;
	int j = 0;
	int tmp = 0;
	int a[10] = { 0 };
	printf("ÇëÊäÈë10¸öÊı\n");
	for (; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) {
			if (a[j] < a[i]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d\n", a[i]);
	}
	printf("\n");
    system("pause");
    return 0;
}