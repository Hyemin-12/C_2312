#include <stdio.h>

int main(void) {
	int a = 10;
	double b = 5.7;
	char ch = 'A';
	int c = a + b;
	char fruit[6] = "apple";
	//화면에 출력
	printf("%d\n", a);
	printf("%.1lf\n", b);
	printf("%c\n", ch);
	printf("%d\n", c);	//why 15? 자동형변환

	//배열의 길이 구하는 방법
	int length;
	length = sizeof(fruit) / sizeof(fruit[0]);

	//배열 출력 방법
	for (int i = 0; i < length; i++) {
		printf("%c", fruit[i]);//why ref? 
	}
	printf("\n");
	return 0;
}