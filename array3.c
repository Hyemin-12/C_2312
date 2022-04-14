#include <stdio.h>

int main(void) {
	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	for (int i = 0; i < 3; i++) { //행
		for (int j = 0; j < 4; j++) { //열
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	int arr2[3][4] = {0};

	printf("arr2의 크기 : %d \n", sizeof(arr2));
	printf("arr2[0]의 크기 : %d \n", sizeof(arr2[0]));
	printf("arr2[1]의 크기 : %d \n", sizeof(arr2[1]));
	printf("arr2[2]의 크기 : %d \n", sizeof(arr2[2]));
	printf("arr2[2][3]의 크기 : %d \n", sizeof(arr2[2][3]));
	printf("arr2의 길이 : %d \n", sizeof(arr2) / sizeof(arr[0][0]));

	return 0;
}