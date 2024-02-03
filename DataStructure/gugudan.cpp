#include <stdio.h>

void main() {
	int i = 0, n, resert;
	//int multiply[9];

	printf("1~9의 정수를 입력 >>");

	while (1) {
		scanf_s("%d", &n);
		if (n < 0 || n > 9)
			printf("\n 1~9 사이의 정수를 입력하세요!!");
		else
			break;
	}

	printf("\n");
	for (i = 0; i < 9; i++) {
		//multiply[i] = n * (i + 1);
		//printf("%d * %d = %d\n", i, i+1, multiply[i]);
		printf("%d * %d = %d\n", n, i + 1, n*(i+1));
	}
	// get: 문자 하나를 받겠다, gets : 문자열을 받겠다
	// gerchar() : 
}