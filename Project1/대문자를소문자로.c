#define _CRT_SECURE_NO_WARNINGS
#define MAX_BUF_SZIE 7
#include <stdio.h>
void test1(){
	char c;
	int index = 1;
	while (index) {
		printf(">���ĺ� ���ڸ� �Է��ϼ���");
		scanf(" %c", &c);
		if (c >= 'A' && c <= 'Z') {
			c = c + ('a' - 'A');
			printf("-�빮�� �Դϴ� -> �ҹ���(%c). \n", c);

		}
		else if (c >= 'a' && c <= 'z') {
			printf("- �ҹ��� �Դϴ�. \n");

		}
		else {
			printf("-���ĺ��� �ƴմϴ�.\n");

		}
		index = 0;

	}
} //��ҹ���
void test2() {
	char c; 
	while (1) {
		scanf("%c", &c);
		printf("-�Է� ���� = A : %d, C: %c \n", c, c);
	}
}
void test3() {
	char c; 
	while (1) {
		scanf("%c", &c);
		printf("�Է¹��� = A : %d, C : %c \n", c, c);
	}
}
void test4() {
	int data, data1; 
	char c; 
	scanf("%d", &data);
	printf(">data = %d\n", data);
	
	getchar();
	scanf("%c", &c);
	printf("> %d - %c \n", c, c);
	
	scanf("%d", &data1);
	printf(" > data1 = %d \n", data1);
}


//getchar()�� �̿��� ���ڿ� �Է�
void my_gets(char* str, int size) {
	char ch; 
	int i = 0; 
	ch = getchar();
	while ((ch != '\n') && (i < size - 1)) {
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
}

int main(void) {

	char str[MAX_BUF_SZIE];
	my_gets(str, sizeof(str));
	printf("�Էµ� ���ڿ� : %s\n", str);
	
	return 0; 
}
