#include <stdio.h>
#include "StackS.h"

int main(void) {
	int item;
	int end[5]; // 마지막에 NULL 값 생각해주기
	printf("\n** 순차 스택 연산 **\n");
	printStack();

	 //입력받은 숫자 삽입 후 출력
	for (int i = 0; i < sizeof(end)/sizeof(end[1]); i++) { // 배열 길이 구하는 방법 알기
		printf("\ninput num >> ");
		scanf_s("%d", &end[i]);
		push(end[i]);
		printStack();
	}

	for (int i = 0; i < sizeof(end) / sizeof(end[1]); i++) {
		item = pop(); printStack();
		printf("\t pop => %d", item);
	}

	getchar(); return 0;
}