#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getIntData(void);
int main(void) {
	//�Ű� ���� x, ��ȯ�� 0
	int data; 
	data = getIntData();

	printf("> data = %d\n", data);

	return 0;
}

int getIntData(void) {
	int data; 
	printf(">�������� �Է��ϼ��� : ");
	scanf("%d", &data);
	return data;
}