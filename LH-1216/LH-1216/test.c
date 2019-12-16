#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int num = 0;
	int i = 0;
	int tmp;
	printf("请输入一个正整数：\n");
	scanf("%d", &num);
	printf("奇数位为：");
	for (i = 31; i >= 0; i = i - 2) {//也是控制32次（每个整型数按32位来算），只是从31位开始移动	
		tmp = (num >> i) & 1;//第一次向右移动31位和1与得到第一位情况，每次变化2位，即可得到奇数位情况
		printf("%d ", tmp);
	}
	printf("\n");
	printf("偶数位为：");
	for (i = 30; i >= 0; i = i - 2) {//向右移动30位，再与1所得结果是原来数字的第二位，再移28位。。。
		tmp = (num >> i) & 1;
		printf("%d ", tmp);
	}
	printf("\n");
	system("pause");
	return 0;
}//获取一个整数二进制序列中所有的偶数位和奇数位并分别打印出二进制序列。