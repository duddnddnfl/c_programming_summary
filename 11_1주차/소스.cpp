/*#define _CRT_SECURE_NO_WARNINGS
#define MAX_BUF_SIZE 7
#include <stdio.h>
//\n���� ���� �Է��ϱ� 
void func1() { 
	char c; 

	while (1) {
		scanf("%c", &c);
		printf("%c", c);
		if (c == '\n') {
			break;
		}
	}
}
//scanf() ��ȯ���� -1 �� �� ������ ���� �Է��ϱ� 
void func2() {
	int ret; 
	char c; 

	while (1) {
		ret = scanf("%c", &c);
		printf("%c", c);
		if (ret == -1) {
			break;
		}
	}
}
//getchar() �� �̿��� ���ڿ� �Է� 
void my_gets(char* str, int size) {
	char ch;
	int i = 0; 
	ch = getchar();
	/// �Էµ� ���ڿ� �߿��� ���� ���ֱ� 
	while ((ch != '\n')&& (i < size - 1)) {
		if (ch != ' ') {
			str[i] = ch;
			i++;
		}
		ch = getchar();
	}
	str[i] = '\0';
}

int main() {
	char str[MAX_BUF_SIZE];
	my_gets(str, sizeof(str));
	printf("�Է��� ���ڿ� : %s\n", str);
	
	return 0; 
}
*/