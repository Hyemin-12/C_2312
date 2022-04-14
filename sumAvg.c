#include <stdio.h>

int main(void) {
	srand(time(NULL));

	int random[10] = { 0 };
	int sum = 0;
	double avg;

	//저장
	printf("저장 : ");
	for (int i = 0; i < 10; i++) {
		random[i] = (rand() % 100) + 1;
		printf("%d \t", random[i]);
	}
	printf("\n");

	//합계
	for (int i = 0; i < 10; i++) {
		sum += random[i];
	}
	printf("합계 : %d \n", sum);

	//평균
	avg = (double)sum / 10;
	printf("평균 : %.1lf \n", avg);

	return 0;
}