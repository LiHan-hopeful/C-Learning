#include<stdio.h>
#include<stdlib.h>

int main() {
	float x = 1.0f;
	float a = 0.01f; 
	float b = 0.02f; 
	float c = 0.05f;
	int i = 0;
	int j = 0;
	int k = 0;
	int count = 0;
	printf(" 1分,2分,5分张数依次为: \n");
	for (i = 1; i < 100; i++) {
		for (j = 1; j < 50; j++) {
			for (k = 1; k < 20; k++) {
				if ((i*a + j * b + k * c) == 1 && i + j + k == 50)
				{
					printf(" %d %d %d\n", i, j, k);
					count++;
				}
			}
		}

     }
	printf("；共有%d种方案\n", count);
    system("pause");
    return 0;
}