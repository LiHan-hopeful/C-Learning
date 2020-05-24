#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void qusort(int s[], int start, int end) {
	int i = start;
                int j = end;
                s[0] = s[start];
                while(i < j)   {
                       while(i < j && s[0] < s[j])   {
                              j --;   
                        }
                        if(i < j)  {
                           s[i] = s[j];
                            i ++;
                        }
                           while(i < j && s[i] <= s[0])   {
                                  i ++;
                          }
                        if(i < j)  {
                           s[j] = s[i];
                            j --;
                        }
                }
                s[i] = s[0];
                if(start < i)  {
                     qusort(s, start, j - 1);
                }
                if(i < end)  {
                     qusort(s, j + 1, end);
                }
}

int main() {
                int a[11] = {0};
	printf("请输入10个数：\n");
                for(int i = 1; i <= 10; i++)  {
                      scanf("%d ", &a[i]);    
                }
	qusort(a, 1, 10);
	printf("排序后的顺序是：\n");
                 for(int i = 1; i <= 10; i++)  {
                      printf("%5d ", a[i]);    
                }
                printf("\n");
    system("pause");
    return 0;
}