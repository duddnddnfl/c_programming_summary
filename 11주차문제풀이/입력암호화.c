/*
#define _CRT_SECURE_NO_WARNINGS
#define MAX_BUF_SIZE 7
#include <stdio.h>

void my_gets(char* str, int size) {
	char ch;
	int i = 0;
	ch = getchar();
	/// �Էµ� ���ڿ� �߿��� ���� ���ֱ� 
	while ((ch != '\n') && (i < size - 1)) {
		ch = getchar();
	}
	str[i] = ch + 22; //��ȣȭ
	i++;
	str[i] = '\0';
}

int main() {
	char str[MAX_BUF_SIZE];
	my_gets(str, sizeof(str));
	printf("�Է��� ���ڿ� : %s\n", str);

	return 0;
}
*/