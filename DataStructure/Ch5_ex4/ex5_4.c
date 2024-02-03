#include <stdio.h>
#include <stdlib.h>
#include "stackL.h"
#include "evalPostfix.h"

int main(void) {
	int result;
	// 숫자 입력하기 >> 10자리 수 입력 어려움
	/*char* express = "35*62/-";
	printf("후위 표기식 : %s", express);*/

	/*할당하고 싶은 자료형* 변수명 = (할당하고 싶은 자료형*)malloc(Sizeof(할당하고 싶은 자료형의 Byte 단위));*/
	char* express = (char*)malloc(sizeof(char));
	
	printf("\n후위 표기식 입력 >> ");
	scanf("%s", express); // 속성 : 아니요
	//gets(express);      // 속성 : 예

	result = evalPostfix(express); // 문자열 주소값이 들어감
	printf("\n\n연산 결과 >> %d\n", result);

	free(express);
	//getchar(); return 0;
}