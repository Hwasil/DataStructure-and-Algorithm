#include <stdlib.h>
#include "stackL.h"
#include <stdio.h>

//������ ���� �������� Ȯ��
int isStackEmpty(void) {
	if (top == NULL) return 1;
	else return 0;
}

// ������ top�� ���� ����
void push(int item) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));

	temp->data = item;
	temp->link = top;   // ���� ��带 top���� ����
	top = temp;         // top ��ġ�� ���� ���� �̵�
}

// ������ top���� ���� ����
int pop(void) {
	int item;
	stackNode* temp = top;

	if (isStackEmpty()) { // ���� : ���� ����Ʈ
		printf("\n\n Stack is Empty! \n");
		return 0;
	}
	else {                 // ���� ����Ʈ �ƴ�
		item = temp->data;
		top = temp->link;  // top ��ġ�� ���� ��� �Ʒ��� �̵�
		free(temp);        // ������ ��� �޸� ��ȯ
		return item;       // ������ ���� ��ȯ
	}
}

// ������ top ���� �˻�
int peek(void) {
	if (isStackEmpty()) {
		printf("\n\n Stack is Empty! \n");
		return 0;
	}
	else {
		return(top->data); // ���� top�� ���� ��ȯ
	}
}

// ������ ���Ҹ� top���� bottom ������ ���
void printStack(void) {
	stackNode* p = top;
	printf("\n STACK [ ");
	while (p) {
		printf("%d", p->data);
		p = p->link;
	}
	printf("] ");
}