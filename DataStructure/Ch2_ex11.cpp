#include <stdio.h>

int recursive(int n) {
	if (n < 1) return 2;
	else return ((2 * 2) * recursive(n - 1) + 1);
}

void main() {
	int n;
	printf("input number >> ");
	scanf_s("%d", &n);
	printf("recursive(%d) = %d\n", n, recursive(n));
}