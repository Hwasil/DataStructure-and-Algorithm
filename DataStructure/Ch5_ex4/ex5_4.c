#include <stdio.h>
#include <stdlib.h>
#include "stackL.h"
#include "evalPostfix.h"

int main(void) {
	int result;
	// ���� �Է��ϱ� >> 10�ڸ� �� �Է� �����
	/*char* express = "35*62/-";
	printf("���� ǥ��� : %s", express);*/

	/*�Ҵ��ϰ� ���� �ڷ���* ������ = (�Ҵ��ϰ� ���� �ڷ���*)malloc(Sizeof(�Ҵ��ϰ� ���� �ڷ����� Byte ����));*/
	char* express = (char*)malloc(sizeof(char));
	
	printf("\n���� ǥ��� �Է� >> ");
	scanf("%s", express); // �Ӽ� : �ƴϿ�
	//gets(express);      // �Ӽ� : ��

	result = evalPostfix(express); // ���ڿ� �ּҰ��� ��
	printf("\n\n���� ��� >> %d\n", result);

	free(express);
	//getchar(); return 0;
}