#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int num = 0;
	int i = 0;
	int tmp;
	printf("������һ����������\n");
	scanf("%d", &num);
	printf("����λΪ��");
	for (i = 31; i >= 0; i = i - 2) {//Ҳ�ǿ���32�Σ�ÿ����������32λ���㣩��ֻ�Ǵ�31λ��ʼ�ƶ�	
		tmp = (num >> i) & 1;//��һ�������ƶ�31λ��1��õ���һλ�����ÿ�α仯2λ�����ɵõ�����λ���
		printf("%d ", tmp);
	}
	printf("\n");
	printf("ż��λΪ��");
	for (i = 30; i >= 0; i = i - 2) {//�����ƶ�30λ������1���ý����ԭ�����ֵĵڶ�λ������28λ������
		tmp = (num >> i) & 1;
		printf("%d ", tmp);
	}
	printf("\n");
	system("pause");
	return 0;
}//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ�����������С�