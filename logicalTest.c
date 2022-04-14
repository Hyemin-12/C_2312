#include <stdio.h>
//int score = 73
//90점 이상 "A"
//80 ~ 89 "B"
//70 ~ 79 "C"
//0 ~ 69 "D"
int main(void) {
	/*int score = 73;
	char result;

	if (score >= 90) {
		result = 'A';
	}
	else if (score >= 80) {
		result = 'B';
	}
	else if (score >= 70) {
		result = 'C';
	}
	else {
		result = 'D';
	}

	printf("%c\n", result);

	int c = 200;
	if(0 <= c || c < 100) {
		printf("1.0부터 100사이\n");
	}
	if (0 <= c && c < 100) {
		printf("2.0부터 100사이\n");
	}

	int d = 5;
	if (d) {
		printf("결과가 참일 때로 생각해서 진행합니다.\n");
	}
	int e = 10;
	if (e == 7)
		printf("Hi\n");
		printf("Hello\n");*/

	int i, total = 0;

	for (i = 0; i < 10; i++) {
		total += i;
		if (total == 10) break;
	}
	printf("%d", total);
	return 0;
}