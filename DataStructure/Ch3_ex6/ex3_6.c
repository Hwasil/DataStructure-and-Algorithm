#include <stdio.h>
#include "minusPoly.h"


int main(void) {
	polynomial A = { 3, {4, 3, 5, 0} };      // ���׽� A�� �ʱ�ȭ
	polynomial B = { 4, {3, 1, 0, 2, 1} };   // ���׽� B�� �ʱ�ȭ
	polynomial C;

	C = minusPoly(A, B);   //���׽� A, B�� ���� ������ �����ϱ� ���� �Լ� ȣ��

	printf("\n A(x) ="); printPoly(A);  //���׽� ���
	printf("\n B(x) ="); printPoly(B);  
	printf("\n C(x) ="); printPoly(C);  

	/*getchar(); return 0;*/
}