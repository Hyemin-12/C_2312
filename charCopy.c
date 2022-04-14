#include <stdio.h>
//문자열의 길이를 구하여 복사
int main(void) {
	char s1[20] = {"coding test"};
	char s2[20];
	int cnt = 0;

	while (s1[cnt] != '\0') {
		cnt++;
	}
	for (int i = 0; i <= cnt; i++) {
		s2[i] = s1[i];
		printf("%c", s1[i]);
	}
	printf("\ns2 : %s\n", s2);

	return 0;
}