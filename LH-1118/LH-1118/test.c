#include<stdio.h>
#include<stdlib.h>

int main(){
	int hud = 0;//表示百位
	int ten = 0;//表示十位
	int ind = 0;//表示个位
	for (int num = 100; num < 999; num++) {
		hud = num / 100;//取百位数
		ten = (num / 10) % 10;//取十位数
		ind = num % 100 % 10;//取个位数
		if (num == (hud * hud * hud) + (ten * ten * ten) + (ind * ind * ind)) {
			printf("%d是水仙花数\n", num);
		}
	}
    system("pause");
    return 0;
}