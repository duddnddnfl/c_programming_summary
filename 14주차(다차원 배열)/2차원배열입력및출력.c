#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char data[2][20] = { 0 };

	printf("���ڿ��� 2�� �Է��ϼ���");
	for (int i = 0; i < 2; i++) {
		scanf("%s", data[i]);
	}
	printf(">�Էµ� ���ڿ��� ����մϴ�.\n");
	for (int i = 0; i < 2; i++) {
		printf("%s\n", data[i]);
	}

	return 0; 
}