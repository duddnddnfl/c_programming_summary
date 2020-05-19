#include <stdio.h>
void plus100(int* pa);
void plus100_noPointer(int a);
int main(void) {

	int a = 100; 

	printf("> a = %d, a �ּ� = 0x%p\n", a, &a);
	plus100(&a);
	printf("2> a = %d, a �ּ� = 0x%p\n", a, &a);
	plus100_noPointer(a);
	printf("3> a = %d, a �ּ� = 0x%p\n", a, &a);
	return 0;
}

void plus100(int* pa) {
	*pa += 100; 
	printf("> *pa = %d, pa �ּ� = 0x%p\n", *pa, &pa);
}

void plus100_noPointer(int a) {
	a = a + 100;
	printf("puls100_noPointer> a = %d, a �ּ� = 0x%p\n", a, &a);
}