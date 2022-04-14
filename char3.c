#include <stdio.h>

int main(void) {
	char s1[30] = { "coding test exercise" };
	int cnt = 0;
	//s1의 길이 => while => 11
	//널표시 == 0, == '\0'  
	
	while (s1[cnt] != '\0') {
		cnt++;
	}
	printf("s1의 길이 : %d\n", cnt);
	for (cnt = 0; cnt < 30; cnt++) {
		if (s1[cnt] == 0) break;
	}
	printf("s1의 길이 : %d\n", cnt);

	return 0;
}