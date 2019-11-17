#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/n-1 - 1/n 的值。 
int main(){
	double sum = 0;
	double tmp = 0;
	double flag = 1.0;
	int n = 1;
	printf("请您输入n的值\n");
	scanf("%d", &n);
	for (int i = 1; i <= 100; i++) {
		tmp = flag / i;		
		flag *= -1;
		sum += tmp;
	}
	printf("%1f\n", sum);
	system("pause");
	return 0;
}