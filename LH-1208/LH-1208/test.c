#include<stdio.h>
#include<stdlib.h>

int Strlen(char *str) {
	if (*str == '\0') {
		return 0;
	}
	else {
		return 1 + Strlen(str + 1);
	}

}

int main() {
	char *p = "abcdef";
	int len = Strlen(p);
	printf("%d\n", len);
	system("pause");
	return 0;
}