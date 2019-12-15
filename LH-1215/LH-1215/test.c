#include<stdio.h>
#include<stdlib.h>

int main() {
	int day = 9;		
	int x1 = 0;
	int x2 = 1;
	while (day > 0) {
		x1 = (x2 + 1) * 2;  // 第一天的桃子数是第2天桃子数加1后的2倍
		x2 = x1;
		day--;
	}
	printf("总数为 %d\n", x1);
    system("pause");
    return 0;
}