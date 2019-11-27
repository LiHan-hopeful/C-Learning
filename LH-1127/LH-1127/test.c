#include<stdio.h>
#include<stdlib.h>

int main() {
	int i = 0;
	int j = 0;
	int a[3][4] = { {1,2,3,4},{5,-6,7,8},{9,19,39,0} };
	int max = a[0][0];
	int min = a[0][0];
	double average = 0;
	double sum = 0;
	for (i=0; i < 3; i++) {
		for (j=0; j < 4; j++) {
			printf("%5d", a[i][j]);
			sum += a[i][j];
			if (a[i][j] > max) {
				max = a[i][j];
			}
			if (a[i][j] < max) {
				min = a[i][j];
			}
			printf("\n");
		}
	}
	average = sum / (3 * 4);
	printf("max=%d,min=%d,average=%.21f\n", max, min, average);
    system("pause");
    return 0;
}