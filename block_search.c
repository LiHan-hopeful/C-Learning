#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct index
{
       int key;
       int start;
       int end;
}index_table[4];

int block_search(int key, int a[]) {
	int i = 1;
                int j = 0;
                while(i <= 3 && key > index_table[i].key)   {
                       i ++;
                 }
                 if(i > 3)  {
                     return 0;
                 }
                 j =index_table[i].start;          
                 while(j <= index_table[i].end && a[j] !=key)   {
                       j ++;
                 }
                 if(j > index_table[i].end)  {
                     j = 0;
                 }
                 return j;
}

int main() {
                int a[16] = {0};
                int j = 0;
                int i = 0;
                int key = 0;
                int k = 0;
	printf("请输入15个数：\n");
                for( i = 1; i < 16; i++)  {
                      scanf("%d ", &a[i]);    
                }
	 for( i = 1; i <= 3; i++)  {
                     index_table[i].start =j +1; 
                     j = j + 1 ;
                     index_table[i].end = j +4;
                     j = j + 4 ;
                    index_table[i].key = a[j];
                }
	printf("请输入你想查找的元素：\n");
                 scanf("d%", &key);
                 k = block_search(key, a);
                 if(k !=0)  {
                     printf("查找成功，其位置是：d%\n", k);
                 }
                 else  {
                      printf("查找失败！");
                 }
    system("pause");
    return 0;
}