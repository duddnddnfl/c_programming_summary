#include <stdio.h>
#include <stdlib.h>

struct A {
	int x; 
	char y[4];
};

union B {
	int x;
	char y[4];
};

int main(void) {
	struct A s = { 0x01020304, }; //������Ʈ ������ �ʱ�ȭ�� �۰��ϸ� �������� 0
	union B	u = { .y[1] = 1};
	
	//s.x = 0x01020304;
	//u.x = 0x01020304;

	printf("-strut.x = %x\n", s.x);
	printf("-strut.y = %x %x %x %x\n",
		s.y[0], s.y[1], s.y[2], s.y[3]);

	printf("-union.x = %x\n", u.x);
	printf("-union.y = %x %x %x %x\n",
		u.y[0], u.y[1], u.y[2], u.y[3]);
	//���ڰ� ���� ������ �ִ°��� ���� ������ ����. 
	//���� ������� �ǹ̴� y[0]���� ������ ������ 0���� ������ 
	// ��Ʋ �����



	return 0;
}