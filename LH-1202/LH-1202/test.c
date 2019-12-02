#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Power(int n, int k) {
	if (k == 1) {
		return n;
	}
		return n * Power(n , k-1);	
}

int main() {
	int n = 0;
	int k = 0;
	printf("«Î ‰»În°¢kµƒ÷µ£∫");
	scanf("%d %d", &n, &k);
	int result = 0;
	result = Power(n, k);
	printf("%d\n", result);
    system("pause");
    return 0;
}