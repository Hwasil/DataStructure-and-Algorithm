#include <stdio.h>
#include "StackS.h"

int main(void) {
	int item;
	int end[5]; // �������� NULL �� �������ֱ�
	printf("\n** ���� ���� ���� **\n");
	printStack();

	 //�Է¹��� ���� ���� �� ���
	for (int i = 0; i < sizeof(end)/sizeof(end[1]); i++) { // �迭 ���� ���ϴ� ��� �˱�
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