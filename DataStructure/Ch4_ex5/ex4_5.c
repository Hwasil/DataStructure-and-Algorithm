#include "LinkedPoly.h"

void main(void) {
	ListHead *A, *B, *C;

	A = createLinkedList();
	B = createLinkedList();
	C = createLinkedList();

	// (다항식, 계수, 지수)
	appendTerm(A, 4, 5);
	appendTerm(A, 5, 4);
	appendTerm(A, 3, 3);
	appendTerm(A, 8, 2);
	appendTerm(A, 7, 1);
	printf("\n A(x) = ");
	printPoly(A);

	appendTerm(B, 5, 5);
	appendTerm(B, 2, 4);
	appendTerm(B, 2, 3);
	appendTerm(B, 1, 0);
	printf("\n B(x) = ");
	printPoly(B);

	addPoly(A, B, C);
	printf("\n C(x) = ");
	printPoly(C);

	//getchar(); return 0;
}