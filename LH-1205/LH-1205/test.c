#include<stdio.h>
#include<stdlib.h>

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = &arr[0];
	for (int i = 0; i <= 9; i++) {
		printf("%d", *(p + i));
		printf("\n");
	}
    system("pause");
    return 0;
}