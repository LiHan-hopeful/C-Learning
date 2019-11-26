#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int i = 0;
	int j = 0;
	int tmp = 0;
	int Pos = 0;
	int a[10] = { 0 };
	printf("ÇëÊäÈë10¸öÊı\n");
	for (; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++) {
		tmp = a[i];
		Pos = i - 1;
		while ((Pos >= 0) && (tmp <= a[Pos])) {
			a[Pos + 1] = a[Pos];
			Pos --;
			}
		a[Pos + 1] = tmp;
		}
	for (i = 0; i < 10; i++) {
		printf("%d\n", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}