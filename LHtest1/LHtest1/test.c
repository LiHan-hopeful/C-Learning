#include<stdio.h>
#include<stdlib.h>

int main() {
	int i = 0;
	int j = 0;
	for (; i < 14; i++) {
		if (i < 8) {
			for (j = 1; j <= 2 * i - 1; j++) {
				printf("*");
			}
			printf("\n");
		}
		else if (i >= 7) {
			for (j = 1; j <= 2 * (14 - i) - 1; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
		printf("\n");
	system("pause");
	return 0;
}