#include <stdio.h>

void main() {
	int i;
	char string1[20] = "Dreams come ture!", string2[20], * ptr1, * ptr2;

	ptr1 = string1;
	printf("\n string1의 주소 = %u \t ptr1 = %u", string1, ptr1);
	printf("\n string1의 = %s \n ptr1 = %s", string1, ptr1);
	printf("\n\n %s", *(ptr1 + 7));
	ptr2 = &string1[7];
	printf("\n %s \n\n", *ptr2);

	for (i = 16; i >= 0; i--) {
		putchar(*(ptr1 + i));
	}

}