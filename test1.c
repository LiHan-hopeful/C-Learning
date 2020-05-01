#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int Menu() {
	printf("=====================\n");
	printf("��ӭ������������Ϸ!\n");
	printf("1. ��ʼ��Ϸ\n");
	printf("0. �˳���Ϸ\n");
	printf("=====================\n");
	printf("����������ѡ��: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

#define MAX_ROW 3
#define MAX_COL 3

void Init(char chessBoard[MAX_ROW][MAX_COL]) {
	srand((unsigned int)time(0));
	memset(chessBoard, ' ', MAX_ROW * MAX_COL * sizeof(char));
}

void Print(char chessBoard[MAX_ROW][MAX_COL]) {
	// �����̵����ݴ�ӡ����
	for (int row = 0; row < MAX_ROW; row++) {
		printf("+---+---+---+\n");
		printf("| %c | %c | %c |\n", chessBoard[row][0],
			chessBoard[row][1], chessBoard[row][2]);
	}
	printf("+---+---+---+\n");
}

void PlayerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("�ֵ��������!\n");
	while (1) {
		printf("��������Ҫ����λ�õ�����(row col):");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW
			|| col < 0 || col >= MAX_COL) {
			printf("������������! \n");
			continue;
		}
		if (chessBoard[row][col] != ' ') {
			// ��ǰλ���Ѿ�������, �������ظ�����
			printf("��λ���Ѿ���������!\n");
			continue;
		}
		chessBoard[row][col] = 'X';
		break;
	}
}

void ComputerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("�ֵ���������!\n");
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			continue;
		}
		chessBoard[row][col] = 'O';
		break;
	}
}

// �ж������Ƿ�����. ������˷��� 1, ���򷵻� 0
int IsFull(char chessBoard[MAX_ROW][MAX_COL]) {
	// ����һ���������Ƿ��п�λ
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] == ' ') {
				// �ҵ���λ��!!! ����û��
				return 0;
			}
		}
	}
	// ����λ�ö�������, Ҳû�ҵ��ո�, ���ղŷ��� 1
	return 1;
}

// ����ֵ��ʾ��Ϸ��״��
// 1. ���� X ��ʾ��һ�ʤ
// 2. ���� O ��ʾ���Ի�ʤ
// 3. ���� ' ' ��ʾ��δ��ʤ��
// 4. ���� Q ��ʾ����
char Check(char chessBoard[MAX_ROW][MAX_COL]) {
	// 1. ������е���, ���Ƿ������������ӵ����
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' '
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}
	// 2. �ټ�����е���
	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] != ' '
			&& chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	// 3. �ټ��Խ���
	if (chessBoard[0][0] != ' '
		&& chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' '
		&& chessBoard[0][2] == chessBoard[1][1]
		&& chessBoard[0][2] == chessBoard[2][0]) {
		return chessBoard[0][2];
	}
	// 4. �ж��Ƿ����, �����������, �������
	if (IsFull(chessBoard)) {
		return 'Q';
	}
	return ' ';
}

void Game() {
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	Init(chessBoard);
	char winner = ' ';
	while (1) {
		// 2. �ȴ�ӡ����
		Print(chessBoard);
		// 3. ��ʾ�������(��������)
		PlayerMove(chessBoard);
		// 4. �����Ϸ�Ƿ����
		winner = Check(chessBoard);
		if (winner != ' ') {
			break;
		}
		// 5. ���Խ�������
		ComputerMove(chessBoard);
		// 6. �����Ϸ�Ƿ����
		winner = Check(chessBoard);
		if (winner != ' ') {
			break;
		}
	}
	Print(chessBoard);
	if (winner == 'X') {
		printf("��ϲ��, ��Ӯ��!\n");
	} else if (winner == 'O') {
		printf("�����, �����Զ��²���!\n");
	} else {
		printf("�����, �͵������忪!\n");
	}
}

int main() {
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		} else if (choice == 0) {
			printf("goodbye!\n");
			break;
		} else {
			printf("������������!\n");
		}
	}
	system("pause");
	return 0;
}