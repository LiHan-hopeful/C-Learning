
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void fun(int *s, int n) {
	int i = 0;
	int max = s[0];
	int a = 0;
	for (i = 0; i < n; i++) {	
		if (s[i] > max) {		
			max = s[i];
			a = i;
		}
	}
	s[a] = s[0];
	s[0] = max;
	int j = 0;
	int min = s[n - 1];
	int b = n - 1;
	for (j = 0; j < n; j++) {	
		if (s[j] < min) {		
			min = s[j];
			b = j;
		}
	}
	s[b] = s[n - 1];
	s[n - 1] = min;
}

void print(int *s, int n) {
	int i = 0;
	for (i = 0; i < n; i++){
		printf("%d ", s[i]);
	}
	printf("\n");
}

int main() {
	int s[20] = {0};
	int i = 0; 
	int n = 0;
	printf("设置数组长度(<20):");
	scanf("%d", &n);
	printf("输入 %d 个元素:\n", n);
	for (i = 0; i < n; i++){
		scanf("%d", &s[i]);
	}
	fun(s, n);
	print(s, n);
	system("pause");
	return 0;
}