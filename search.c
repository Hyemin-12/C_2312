#include <stdio.h>

int main(void) {
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int num, i;

	printf("ã�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	for (i = 0; i < 10; i++) {
		if (arr[i] == num) {
			break; //i�� �ش� �ε����� ����� ä break
		}
	}
	
	if (i < 10) {
		printf("%d�� arr[%d]�� �ֽ��ϴ�.", num, i);
	}else {
		printf("���� �����ϴ�.");
	}

	return 0;
}