#include <stdio.h>

int main(void) {
	int i, n = 0, *ptr;
	int sale[2][4] = { {64, 84, 140, 130}, {157, 209, 251, 312} };

	//ptr = &sale[0][0]; ���� ����� �������� �ڵ带 ����
	// 2���� �迭�� ù �����ּ�
	//ptr = sale[0];

	//for (i = 0; i < 8; i++) {
	//	printf("\n address : %u sale %d = %d", ptr, i, *ptr);
	//	ptr++; //�ּҰ� ��ĭ�� ���� => 4����Ʈ�� ����
	//}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("\n address : %u sale %d = %d", sale[i][j], j, sale[i][j]); // �̰� �𸣰ڳ�
		}
	}
	
	//getchar(); return 0;
}