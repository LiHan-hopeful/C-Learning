#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a[4][4] = { 0 };  
	int b[4][4] = { 0 }; //a���ԭʼ�������ݣ�b�����ת����������
	int i = 0;
	int j = 0;
	printf("input 16 numbers: ");//����һ�����ݴ�ŵ�����a�У�Ȼ����ת��ŵ�b������
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &a[i][j]);
			b[3 - j][i] = a[i][j];
		}
	}	
	printf("array b: ");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {			
			printf("%6d", b[i][j]);
			printf(" ");
		}	
	}
    system("pause");
    return 0;
}