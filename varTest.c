#include <stdio.h>

int main(void) {
	int a = 10;
	double b = 5.7;
	char ch = 'A';
	int c = a + b;
	char fruit[6] = "apple";
	//ȭ�鿡 ���
	printf("%d\n", a);
	printf("%.1lf\n", b);
	printf("%c\n", ch);
	printf("%d\n", c);	//why 15? �ڵ�����ȯ

	//�迭�� ���� ���ϴ� ���
	int length;
	length = sizeof(fruit) / sizeof(fruit[0]);

	//�迭 ��� ���
	for (int i = 0; i < length; i++) {
		printf("%c", fruit[i]);//why ref? 
	}
	printf("\n");
	return 0;
}