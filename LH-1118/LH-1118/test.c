#include<stdio.h>
#include<stdlib.h>

int main(){
	int hud = 0;//��ʾ��λ
	int ten = 0;//��ʾʮλ
	int ind = 0;//��ʾ��λ
	for (int num = 100; num < 999; num++) {
		hud = num / 100;//ȡ��λ��
		ten = (num / 10) % 10;//ȡʮλ��
		ind = num % 100 % 10;//ȡ��λ��
		if (num == (hud * hud * hud) + (ten * ten * ten) + (ind * ind * ind)) {
			printf("%d��ˮ�ɻ���\n", num);
		}
	}
    system("pause");
    return 0;
}