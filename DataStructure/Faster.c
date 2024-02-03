#include <stdio.h>

long int fact(int n) {
	int i, f = 1;
	if (n <= 1)
		return (1);
	else {
		for (i = n; i >= 1; i--)
			f = f * i;
		return f;
	}
}

int main() {
	int n = 5;

	printf("%d", fact(n));
}