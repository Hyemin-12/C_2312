#include <stdio.h>

int main(void) {
	int arr[10] = { 2, 5, 78, 43, -45, 68, 31, 100, 45, 23 };
	int max = arr[0], locate = 0;

	for (int i = 0; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
			locate = i;
		}
	}
	printf("최대값 : %d\n", max);
	printf("위치 : arr[%d]\n", locate);

	return 0;
}