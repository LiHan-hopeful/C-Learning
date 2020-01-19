#include<stdio.h>
#include<stdlib.h>

int main() {
	int i = 0;
	int j = 0;
	int k = 0;
	printf("输出结果为：\n");
	for (i = 1; i < 5; i++) {
		for (j = 1; j < 5; j++) {
			for (k = 1; k < 5; k++) {
				if (i != k && i != j && j != k) {
					printf("%d,%d,%d\n", i, j, k);
				}
			}
		}
	}
	system("pause");
	return 0;
}