#include <stdio.h>

int main(void) {
	char s1[30] = { "coding test exercise" };
	int cnt = 0;
	//s1�� ���� => while => 11
	//��ǥ�� == 0, == '\0'  
	
	while (s1[cnt] != '\0') {
		cnt++;
	}
	printf("s1�� ���� : %d\n", cnt);
	for (cnt = 0; cnt < 30; cnt++) {
		if (s1[cnt] == 0) break;
	}
	printf("s1�� ���� : %d\n", cnt);

	return 0;
}