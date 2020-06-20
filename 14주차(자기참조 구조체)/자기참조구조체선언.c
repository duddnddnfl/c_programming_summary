#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592
void exchange(struct point* p);

struct point {
	int x;
	int y; 
	int r;
	struct point* next;
};
typedef struct point ptrType;
void printList(ptrType* ptr);
void getArea(ptrType* ptr);

int main(void)
{
	ptrType a = { 1,2,3,NULL }, 
		b = { 3,4,4,NULL },
		c = {5,6,5,NULL},
		*ptr;
	//���� ����Ʈ�ϱ� ���� ���Ѿ��� 
	a.next = &b; 
	b.next = &c;
	ptr = &a; 

	printList(ptr);
	//���� ���󰡸鼭 ���̸� ����ϴ� �Լ� 
	//getArea(ptr) 
	//����Ʈ�� ���󰡸鼭 ������ ���ϰ�, ������ �� ���ؼ� ���
	getArea(ptr);
	return 0; 
}

//linked list �� ����ü�� ���󰡸鼭 ����ϴ� �Լ�
void printList(ptrType* ptr) { 
	while (ptr!= NULL) {
		printf(">circle = (x:%d,y:%d,r:%d)\n",
			ptr->x, ptr->y, ptr->r);
		ptr = ptr->next; 
		//ó�� a�� �ּ� 100�� b�� �ּ� 200�� ����Ŵ
		//(ptr != NULL)�� �ɶ����� �ݺ� 
	}
}

void getArea(ptrType* ptr) {
	double area = 0.0;
	while (ptr != NULL) {
		//���� ������ pi*r^2
		area += (pow((double)ptr->r, 2.0) * PI);
		ptr = ptr->next;
	}
		printf("%lf\n", area);
}