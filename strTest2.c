#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[7][10] = { "�ѱ�", "�̱�", "�Ϻ�", "����", "����", "ȣ��", "����" };

	for (int i = 0; i < sizeof(s1); i++) {
		if (strcmp(s1[i], "����") == 0) {
			printf("������ ��ġ : %d��°\n", i + 1);
		}
	}

	return 0;
}