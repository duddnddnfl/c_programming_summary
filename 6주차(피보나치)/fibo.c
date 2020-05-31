#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fibo(int n);
int forFibo(int n);

int main(void) {
	// ������� ���� �Ǻ���ġ ���� 
	// fn = fn-1 + fn-2
	//f0 = 0; ���� ���� 
	//f1 = 1; ���� ����
	int result; 

	for (int i = 2; i < 10; i++) {
		result = fibo(i);
		printf("> (%5d) ��° fibo %5d\n",i, result);
	}



	return 0; 
}

int fibo(int n) {
	int result; 

	if (n ==0) {
		result = 0;
	}
	else if (n == 1) {
		result = 1;
	}
	else {
		result = fibo(n - 1) + fibo(n - 2);
	}
	return result;
}

//n >= 2
int forFibo(int n) {
	//fn = fn-1 + fn-2; 
	//f0 = 0; f1 = 1;  
	//		f0 + f1 => f2 
	//		f1 + f2 => f3
	///		...fn

	int fn_2= 0, fn_1= 1, fn;
	int start = 2, index; 

	if (n == 0) {
		return 0; 
	}
	else if (n == 1) {
		return 1;
	}
	else {

		for (index = start; index <= n; index++) {
			fn = fn_1 + fn_2;
			fn_2 = fn_1;
			fn_1 = fn;
		}
	}

	return fn;

}