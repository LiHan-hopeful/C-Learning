#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//ͨ��ʹ�õݹ麯��ʵ����n�Ľ׳ˡ�
int Factor(int num) {
	if (num == 1) {
		return 1;
	}
	return num * Factor(num - 1);
}

int main() {
	printf("����������Ҫ��׳˵�����");
	int num = 0;
	scanf("%d", &num);
	printf("%d�Ľ׳�Ϊ��%d\n", num, Factor(num));
    system("pause");
    return 0;
}
