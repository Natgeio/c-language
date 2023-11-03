#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define row 11
#define col 11


void init_board(char arr[row][col], int x, int y, char s) {
	for (int i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			arr[i][j] = s;
		}
	}
}


void display(char arr[row][col],int x,int y) {
	for (int i = 0; i < x; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
}


void setmine(char arr[row][col],int x,int y) {
	int count = 10;
	while (count) {
		int a = rand() % x + 1;
		int b = rand() % y + 1;
		if (arr[a][b] == '0') {
			arr[a][b] = '1';
			count--;
		}
	}
}


void findmine(char mine[row][col], char show[row][col], int x, int y) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {

		}
	}
}

void copydate(char arr1[row][col], char arr2[row][col], int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (arr1[i][j] == '1') {
				arr2[i][j] = 'b';
			}
		}
	}
}
int main() {
	srand((unsigned int)time(NULL));
	char mine[row][col];
	char show[row][col];
	init_board(mine, row, col, '0');
	init_board(show, row, col, 's');

	display(mine, row, col);//È« ¡®0¡¯
	printf("\n");
	setmine(mine, row, col);// ²¼À×
	printf("\n");

	display(mine, row, col);
	printf("\n");

	copydate(mine, show, row, col);
	display(show, row, col);

	return 0;
}