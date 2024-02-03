#pragma once

typedef struct stackNode {
	int data;
	struct stackNode* link;
} stackNode;

stackNode* top;

int isStackEmpty(void);
void push(int item);
int pop(void);
int peek(void);
void printStack(void)