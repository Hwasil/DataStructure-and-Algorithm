#include <stdio.h>

void main() {
	int i = 10;
	int* ptr;

	printf("\n i의 값 = %d", i);
	printf("\n i의 메모리 주소 = %u", &i); //%u?

	ptr = &i;
	printf("\n\n <<ptr=&i running>>");
	printf("\n ptr의 메모리 주소(&ptr) = %u", &ptr);
	printf("\n ptr의 값(ptr) = %u", ptr);
	printf("\n ptr의 참조값(&ptr) = %d", *ptr);
}