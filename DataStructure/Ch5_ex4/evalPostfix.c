#include <string.h>
#include "stackL.h"
#include "evalPostfix.h"

// ���� ǥ��� ���
int evalPostfix(char* exp) {
	int opr1, opr2, value, i = 0;
	int length = strlen(exp);
	// char ������ �Ű������� ���� ���� exp�� ���̸� ����Ͽ� length ������ ����
	char symbol;

	top = NULL;

	for (i = 0; i < length; i++) {
		symbol = exp[i];
		if (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/') { // �����ڰ� �ƴ� ������ ��, �������� int�� �ٲ㼭 push
			value = symbol - '0';
			push(value);
		}
		else {
			opr2 = pop();
			opr1 = pop();
			// ���� opr1�� opr2�� ���� symbol�� ����� �����ڸ� ����
			switch (symbol)
			{
			case '+': push(opr1 + opr2); break;
			case '-': push(opr1 - opr2); break;
			case '*': push(opr1 * opr2); break;
			case '/': push(opr1 / opr2); break;
			}
		}
	}
	// ���� exp�� ���� ó���� ��ģ �� ���ÿ� ���� �ִ� �ᱣ���� pop�Ͽ� ��ȯ
	return pop();
}