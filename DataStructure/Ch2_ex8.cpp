#include <stdio.h>

void main() {
	int i = 10;
	int* ptr;

	printf("\n i�� �� = %d", i);
	printf("\n i�� �޸� �ּ� = %u", &i); //%u?

	ptr = &i;
	printf("\n\n <<ptr=&i running>>");
	printf("\n ptr�� �޸� �ּ�(&ptr) = %u", &ptr);
	printf("\n ptr�� ��(ptr) = %u", ptr);
	printf("\n ptr�� ������(&ptr) = %d", *ptr);
}