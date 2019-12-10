#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int rows = 0;
	int coef = 1;
	int space = 0;
	int i = 0;
	int  j = 0;
	printf("请输入您要打印的行数: ");
	scanf("%d", &rows);

	//控制行数
	for (i = 0; i < rows; i++)
	{
		//打印空格
		for (space = 1; space <= rows - i; space++)
			printf("  ");
		//
		for (j = 0; j <= i; j++)//第n行的数字有n项，所以j<=i
		{
			//第一行为1，第一列为1
			if (j == 0 || i == 0)
				coef = 1;
			else
				coef = coef * (i - j + 1) / j;//最后一个每一行i=j,倒数第二行（coef=j）等于列数，
			printf("%4d", coef);
		}
		printf("\n");
	}
    system("pause");
    return 0;
}