#include <stdio.h>
//문자열의 길이를 구하지 않고 복사 
int main(void) {
	char s1[20] = {"coding test"};
	char s2[20];
	int i;

	for (i = 0; s1[i] != 0; i++) {
		s2[i] = s1[i];
	}

	s2[i] = '\0';

	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);

	return 0;
}