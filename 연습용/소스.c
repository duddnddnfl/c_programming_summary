//�Ǻ���ġ ���� ����ϱ� 

// fn= fn - 2 + fn -1 ; 
// fn-2 = 1 ; fn-1 = 0; 

#include <stdio.h>
int main(void) {
	//�Ǻ���ġ ���� �ݺ��� for �� 
	//�� ������ res
	int i, res = 0; 
	for (i = 0; i <= 5; i++) {
		res += fibo(i);
		printf("%d\n", res);
	}
	return 0; 
}

int fibo(int num) {
	int result;
	if (num == 0) {
		return 0; 
	}
	else if (num == 1){
		return 1; 
	}
	else {
		result = fibo(num - 2) + fibo(num - 1);
	}

	return result; 
}

int forfibo(int num) {
	// ��ĭ �� �б� 
	//fn = fn - 1 + fn - 2;
	//fn + 1 = fn + fn 1 - ; 
	
	int i; 
	for (i = 0; i < num; i++) {

	}

}