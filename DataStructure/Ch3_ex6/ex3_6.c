#include <stdio.h>
#include "minusPoly.h"


int main(void) {
	polynomial A = { 3, {4, 3, 5, 0} };      // 다항식 A의 초기화
	polynomial B = { 4, {3, 1, 0, 2, 1} };   // 다항식 B의 초기화
	polynomial C;

	C = minusPoly(A, B);   //다항식 A, B에 대한 뺄셈을 수행하기 위해 함수 호출

	printf("\n A(x) ="); printPoly(A);  //다항식 출력
	printf("\n B(x) ="); printPoly(B);  
	printf("\n C(x) ="); printPoly(C);  

	/*getchar(); return 0;*/
}