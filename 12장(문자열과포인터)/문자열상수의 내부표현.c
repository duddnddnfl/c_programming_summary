#include <stdio.h>
int main(void)
{
	printf("- %s \n","david"); //��Ʈ�� �״�� ���
	printf("- %p \n", "david"); //�����ּ��� ���� Ȯ��
	printf("- %c \n", *"david"); //�ּҿ� �ִ� ���� �ϳ�
	printf("- %c \n", *("david" + 1)); //1�� ��� �ϳ��� �ǹ� 1byte�� �ǹ�
	printf("- %c \n", "david"[1]);; //���� ���� ǥ��
	//���ڿ������ ������ �޸� ������ ���� �Ǿ� �ְ� 
	//�����ּҸ� �ǹ��Ѵ�. 

	char* pc;
	pc = "david"; //���� �ּ�

	putchar('\n');
	printf("- %s \n", pc); //��Ʈ�� �״�� ���
	printf("- %p \n", pc); //�����ּ��� ���� Ȯ��
	printf("- %c \n", *pc); //�ּҿ� �ִ� ���� �ϳ�
	printf("- %c \n", *(pc + 1)); //1�� ��� �ϳ��� �ǹ� 1byte�� �ǹ�
	printf("- %c \n", pc[1]);; //���� ���� ǥ��

	//�����ϰ� ǥ���ȴ�. 

	return 0;
}