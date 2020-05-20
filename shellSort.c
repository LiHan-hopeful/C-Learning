#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void shellSort(int s[], int n) {
                int i = 0;
                int j = 0;
                int d = n / 2;
               while (d >= 1)  {
                   for(i= d + 1; i <= n; i++)   {
                      s[0] = s[i];
                       j = i - d;
                       while((j > 0) && (s[0] < s[j]))  {
                           s[j + d] = s[j];
                            j = j - d;
                       } 
                      s[j + d] = s[0];
                   }
                   d = d / 2;
               }          
}

int main() {
                int a[11] = {0};
	printf("请输入十个数！\n");
                for（int i = 0; i < 10; i++ ）{
	    scanf("%d ", &a[i]);
                }
	shellSort(a, 10);
	printf("排序后的顺序是：\n", );
                 for（int i = 0; i < 10; i++ ）{
	   printf("%5d ", a[i]);
                }
                printf("\n");
    system("pause");
    return 0;
} 