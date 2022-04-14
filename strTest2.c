#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[7][10] = { "한국", "미국", "일본", "영국", "독일", "호주", "독일" };

	for (int i = 0; i < sizeof(s1); i++) {
		if (strcmp(s1[i], "독일") == 0) {
			printf("독일의 위치 : %d번째\n", i + 1);
		}
	}

	return 0;
}