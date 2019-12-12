#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int n = 0;
	printf("Please input a number: ");
	scanf("%d", &n);
	printf("%d= ", n);
	for (int i = 2; i <= n; i++) {
		while (n != i) {
			if (n%i == 0) {
				printf("%d * ", i);
				n = n / i;
			}
			else
				break;
		}
	}
	printf("%d\n", n);
    system("pause");
    return 0;
}