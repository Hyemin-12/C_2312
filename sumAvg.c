#include <stdio.h>

int main(void) {
	srand(time(NULL));

	int random[10] = { 0 };
	int sum = 0;
	double avg;

	//����
	printf("���� : ");
	for (int i = 0; i < 10; i++) {
		random[i] = (rand() % 100) + 1;
		printf("%d \t", random[i]);
	}
	printf("\n");

	//�հ�
	for (int i = 0; i < 10; i++) {
		sum += random[i];
	}
	printf("�հ� : %d \n", sum);

	//���
	avg = (double)sum / 10;
	printf("��� : %.1lf \n", avg);

	return 0;
}