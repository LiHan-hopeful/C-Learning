#include<stdio.h>
#include<stdlib.h>

int main() {
	int day = 9;		
	int x1 = 0;
	int x2 = 1;
	while (day > 0) {
		x1 = (x2 + 1) * 2;  // ��һ����������ǵ�2����������1���2��
		x2 = x1;
		day--;
	}
	printf("����Ϊ %d\n", x1);
    system("pause");
    return 0;
}