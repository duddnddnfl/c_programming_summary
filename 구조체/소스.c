#include <stdio.h>
#include <stdlib.h>
int main(void) {
	struct point {
		int x; 
		int y;
	}; typedef struct point PointType; 
	struct rect {
		PointType p01; 
		PointType p02;
	}; typedef struct rect rectType;
	
	rectType Rect01 = { {1,2},{7,8} };
	//���� rect�� ������ ���Ͻÿ�
	//p02-p01 
	int width, heigh, result;
	width = Rect01.p02.x - Rect01.p01.x;
	heigh = Rect01.p02.y - Rect01.p01.y;
	//����ü ������ �ɹ��� �� ����ü�ϱ� ���� �ι� �����Ѵ�. 
	result = width * heigh;
	printf("result = %d\n", result);

	return 0;
}