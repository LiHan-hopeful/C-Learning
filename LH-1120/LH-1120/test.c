#include<stdio.h>
#include<stdlib.h>

void swap(int* x, int* y) {
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main() {
	int a = 20;
	int b = 10;
	printf("����ǰa=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("������a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}