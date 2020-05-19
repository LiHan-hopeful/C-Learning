#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int leapyear(int n) {
	if (n % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
		return 1;
	}
	else  {
                      return 0;
                }
}

int number(int year, int m, int d) {
                int sum = 0;
                int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
                int b[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
                if (leapyear(year) == 1) {
                    for(int i = 0; i< m-1; i++)  {
                         sum += b[i] ;
                    }
                 } else {
                        for(int i = 0; i< m-1; i++)  {
                        sum += a[i] ;
                        } 
                     }
                  sum += d;
                  return sum;           
}

int main() {
                int year = 0;
                int month = 0;
                int day = 0;
                int result = 0;
	printf("请年月日：\n");
	scanf("%d %d %d", &year, &month, &day);
	result = number(year, month, day);
	printf("第%d天\n", result);
    system("pause");
    return 0;
}