#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void merge(int r[], int s[], int x1, int x2, int x3)  {
       int i = x1;
       int j = x2 +1;
       int k = x1;
       while((i <= x2) && (j <= x3))   {
               if(r[i] <= r[j])  {
                     s[k] = r[i];
                     i ++;
                     k ++;
               }
               else {
                     s[k] = r[j];
                     j ++;
                     k ++;
               }
           }
               while(i <= x2)   {
                      s[k ++] = r[i ++] ;   
               } 
               while(i <= x3)   {
                      s[k ++] = r[j ++] ;   
               } 
}

void merge_sort(int s[], int r[], int m, int n) {
	int p = 0;
                int t[20] = {0};
                if(m == n)  {
                     s[m] = r[m];
                }
                else  {
                p = (m +n) / 2;
                merge_sort(r, t, m, p);
                merge_sort(r, t, p + 1, n);
                merge(t, s, m, p, n);
                }             
}

int main() {
                int a[11] = {0};
	printf("请输入10个数：\n");
                for(int i = 1; i <= 10; i++)  {
                      scanf("%d ", &a[i]);    
                }
	merge_sort(a, a, 1, 10);
	printf("排序后的顺序是：\n");
                 for(int i = 1; i <= 10; i++)  {
                      printf("%5d ", a[i]);    
                }
                printf("\n");
    system("pause");
    return 0;
}