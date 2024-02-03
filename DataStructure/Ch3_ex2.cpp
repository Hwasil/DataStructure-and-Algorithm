#include <stdio.h>

int main(void) {
	int i, n = 0, *ptr;
	int sale[2][4] = { {64, 84, 140, 130}, {157, 209, 251, 312} };

	//ptr = &sale[0][0]; 같은 결과가 나오도록 코드를 수정
	// 2차원 배열의 첫 시작주소
	//ptr = sale[0];

	//for (i = 0; i < 8; i++) {
	//	printf("\n address : %u sale %d = %d", ptr, i, *ptr);
	//	ptr++; //주소가 한칸씩 증가 => 4바이트씩 증가
	//}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("\n address : %u sale %d = %d", sale[i][j], j, sale[i][j]); // 이걸 모르겠네
		}
	}
	
	//getchar(); return 0;
}