#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* iPtr;
	int i, sum = 0;
	//�����ͺ����� Ÿ�� �ؼ�
	//������ ������ �־ �ּҷ� ���� �ű⿡ ������ �ִ�.

	//int **iPtr; 
	//�ּҰ� �ִµ� �ѹ����� �ּҰ� �ְ� 
	//�� �ѹ� ���� ������ �ִ�.


	iPtr = (int*)malloc(sizeof(int) * 100);
	//calloc(100, sizeof(int)); 
	//�Ķ��Ÿ�� 2�� ���� �˾Ƽ� ������

	for (i = 0; i < 100; i++) {
		//*(iPtr + i) = i + 1; �Ʒ��� �Ȱ���. 
		iPtr[i] = i + 1;
		//��ȣ �ȿ� i�� ����ó�� �Ǵ°� �ƴ϶�
		//1�� �����ϳ� , 2�� ���� �ΰ� �̷��� �����ؾߵ�\
		
	}//�ʱ�ȭ
	for (i = 0; i < 100; i++) {
		printf("%d	", iPtr[i]);
		if (iPtr[i] % 5 == 0) {
			putchar('\n');
		}
	}

	for (i = 0; i < 100; i++) {
		sum += iPtr[i];
	}

	printf("sum : %d", sum);
	free(iPtr);
	return 0;
}
