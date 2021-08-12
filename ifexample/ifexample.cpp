#include <stdio.h>

void sum(int(*parr1)[3], int(*parr2)[3]); // 합
void sub(int(*parr1)[3], int(*parr2)[3]); // 차
void mul(int(*parr1)[3], int(*parr2)[3]); // 곱

int main(void)
{
	int arr1[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int arr2[3][3] = { {10,11,12}, {13,14,15}, {16,17,18} };

	sum(arr1, arr2);
	sub(arr1, arr2);
	mul(arr1, arr2);

	return 0;
}

void sum(int(*parr1)[3], int(*parr2)[3]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d", parr1[i][j] + parr2[i][j]);
		}
		printf("\n");
	}
}

void sub(int(*parr1)[3], int(*parr2)[3]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d", parr1[i][j] - parr2[i][j]);
		}
		printf("\n");
	}
}


void mul(int(*parr1)[3], int(*parr2)[3]) {
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			// i, j번째 값의 곱 계산
			printf("%4d", parr1[i][0] * parr2[0][j] + parr1[i][1] * parr2[1][j] + parr1[i][2] * parr2[2][j]);
		}
		printf("\n");
	}
}
