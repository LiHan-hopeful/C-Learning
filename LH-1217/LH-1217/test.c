#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int search(char s1[], char s2[])
{
	int i = 0;
	int j = 0;
	int len = strlen(s2);
	while (s1[i]) {
		for (j = 0; j < len; j++) 
			if (s1[i + j] != s2[j]) 
				break;
		if (j >= len)
			return i;
		else 
			i++;
	}
	return -1;
}

int main() {
	char s1[6] = "thisis";
	char s2[5] = "is";
	printf("%d\n", search(s1, s2));
    system("pause");
    return 0;
}