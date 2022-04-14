#include <stdio.h>

int main(void) {
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int num, i;

	printf("찾고 싶은 숫자를 입력하세요 : ");
	scanf("%d", &num);

	for (i = 0; i < 10; i++) {
		if (arr[i] == num) {
			break; //i에 해당 인덱스가 저장된 채 break
		}
	}
	
	if (i < 10) {
		printf("%d는 arr[%d]에 있습니다.", num, i);
	}else {
		printf("값이 없습니다.");
	}

	return 0;
}