#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int rows = 0;
	int coef = 1;
	int space = 0;
	int i = 0;
	int  j = 0;
	printf("��������Ҫ��ӡ������: ");
	scanf("%d", &rows);

	//��������
	for (i = 0; i < rows; i++)
	{
		//��ӡ�ո�
		for (space = 1; space <= rows - i; space++)
			printf("  ");
		//
		for (j = 0; j <= i; j++)//��n�е�������n�����j<=i
		{
			//��һ��Ϊ1����һ��Ϊ1
			if (j == 0 || i == 0)
				coef = 1;
			else
				coef = coef * (i - j + 1) / j;//���һ��ÿһ��i=j,�����ڶ��У�coef=j������������
			printf("%4d", coef);
		}
		printf("\n");
	}
    system("pause");
    return 0;
}