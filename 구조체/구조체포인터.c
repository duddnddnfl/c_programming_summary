#include <stdio.h>
#include <stdlib.h>

void exchange(struct point* p);

struct point {
	int x;
	int y;

};

int main(void)
{
	struct point p01 = { 100,200 };
	struct point* pstr;
	pstr = &p01;

	printf("before> x=%d, y=%d\n", pstr->x, pstr->y); //�������϶� ȭ��ǥ
	//p01 = exchange(*pstr); //����ü�� �ѱ�� ����
	exchange(pstr);
	printf("after> x=%d, y=%d\n", pstr->x, pstr->y);



	return 0;
}
void exchange(struct point *p) {
	int tmp;
	tmp = p->x;
	p->x = p->y;
	p->y = tmp;
	//������ �ʿ� ����
	//�ּҸ� �ѱ�� �ּҿ� ���� ��ü������ �ٲ����.
}