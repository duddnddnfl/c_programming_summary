#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[20];
	int index = 0, a;
	
	printf("���ڿ��� �Է��ϼ��� :");
	scanf("%s", str);
	
	while (str[index] != '\0') {
		printf("- %c, - ascii : %d \n", str[index], str[index]);
		index++;
	}

	scanf("%d", &a);
	return 0;	
}