#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void test1() {
	 // 4 ���� 
	// a < 5, 5< a <= 50, 50 < a < 100, a>=100
	int a = 70;

	if (a < 5) {
		printf("a < 5 ��� �Դϴ�.\n");
	}
	else if (a <= 50) {
		printf("a>= 5 && a <= 50 ��� �Դϴ�.\n");
	}
	else if (a < 100) {
		printf(" a > 50 && a < 100 ��� �Դϴ�. \n");
	}
	else {
		printf(" a>= 100 ��� �Դϴ�. \n");
	}
}

void test2() {
	int a = -1, b = 1; 

	if (a > 0)  // ��ȣ����
		if (b > 0) {
			printf(" a > 0 && b > 0\n");
		}
	// ��ȣ ���� 
	else {
		printf(" a<= 0\n");
	}
}

void test3() {
	char c = 'A'; //�ƽ�Ű �ڵ� ���� ���� - ���� 
	switch (c)
	{
	case 'A': 
		printf(" A �Դϴ�. \n");
		break;
	case 'B':
		printf(" B �Դϴ�. \n");
		break;
	case 'C':
		printf(" C �Դϴ�. \n");
		break;
	default:
		printf("default �Դϴ�.\n");
		break;
	}
}

void test4() {
	int index = 100; 
	while (1) {
		if (index % 2 == 1) {
			printf("%5d", index);

		}
		index++;
		if (index > 200) {
			break;
		}
	}
}

void test5() {
	int index = 100; 
	for (index = 100; index <= 200; index++) {
		if (index % 2 == 1){
			printf("%5d", index);
		}
	}
}

// ������ ��� 
// 2�ܺ��� ���
void test6() {
	int i, j;
	int count = 0;

	for (i = 2; i <= 9; i++) { //���� ǥ�� 
		printf("\n--%2d��--\n", i);
		for (j = 1; j <= 9; j++) {
			count++;
			if (j > 5) { // 5���� Ŭ ��� break
				continue;
			}
			printf("%3d * %3d = %5d\n", i, j, i * j);
		}
	}
	printf("count %d", count);
}

//�Ҽ� ����ϱ�
void test7() {
	// 2~ 100 ���� �߿��� �Ҽ� �� ��� ���... 
	// �Ҽ� : 1�� �ڽ��� ������ �ٸ� ���ڷδ� ������ �������� �ʴ� ��

	int i, j, prime, count = 0;
	for (i = 2; i <= 100; i++) {
		// ��� ���� : i;
		prime = 1;
		// 1, i ���� : 2 ~ i-1 ���� ������� ������ ����. 
		for (j = 2; j <= i - 1; j++) {

			if (i % j == 0) {
				//�Ҽ����� ����
				prime = 0; 
				break;
			}
		}
		if (prime == 1) {
			// �ش� ���� : i is �Ҽ��� �ش�...
			printf("%5d", i);
			count++;
			if (count  % 5 == 0) {
				putchar('\n');
			}
		}
	}
}

void printMatrix(int a[][3]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%4d", a[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
}
//��Ʈ���� ����Լ�
void test8() {
	int i, j, k, temp;
	int mA[3][3] = { 1,2,3, 4,5,6, 7,8,9 };
	int mB[3][3] = { 1,2,3, 4,5,6, 7,8,9 };
	int mC[3][3] = { 0,};

	// mC[i][j] = mA[i][k] * mB[k][j]

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			temp = 0;
			for (k = 0; k < 3; k++) {
				temp += mA[i][k] * mB[k][j];
			}
			mC[i][j] = temp;
		}
	}
	printf("\n--mA--\n");
	printMatrix(mA);
	printf("\n--mB--\n");
	printMatrix(mB);
	printf("\n--mC--\n");
	printMatrix(mC);

}
int main(void)
{
	test8();
}