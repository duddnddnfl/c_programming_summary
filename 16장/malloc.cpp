#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pInt; //Ÿ���� ��Ƽ�� ������
	double* pDouble; 
	pInt = (int *)malloc(sizeof(int));
	if (pInt == NULL) {
		printf(">ERROR malloc\n" );
		exit(1); //�����Ѵ�. 1���� ��������� �ƴ� ������ 0
		 
	}
	pDouble = (double*)malloc(sizeof(double));
	//malloc�� void�������� ���� ����ȯ �ʿ�

	*pInt = 100; 
	*pDouble = 3.14; 
	printf("- ���� ��� = %d\n", *pInt);
	printf("- �Ǽ� ��� = %lf\n", *pDouble);

	free(pInt);
	free(pDouble);

	return 0; 
}