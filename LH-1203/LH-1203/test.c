#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�ݹ�ʵ��
int Factor1(int n) {
	if (n == 1) {
		return 1;
	}
	return n * Factor1(n - 1);
}

//�ǵݹ�ʵ��
int Factor2(int n) {
	int i = 1;
	if (n == 0) {
		return 1;
	}
	int sum = 1;
	while (i <= n) {
		sum *= i;
		i++;
	}
	return sum;
}

int  main(void) {
	int n = 0;
	printf("������n��ֵ��");
	scanf("%d", &n);
	int result = Factor2(n);
	printf("%d �Ľ׳�Ϊ��%d\n", n, result);
	system("pause");
	return 0;
}//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 