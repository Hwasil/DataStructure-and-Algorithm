#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 프로그램 입력 후 실행, 내림차순 정렬, 키보드로 입력받아 정렬

void SelectionSort(int a[], int size);
void Descending(int a[], int size);

int main(void) {
	int i, size;
	
	printf("입력할 원소 개수 >> ");
	scanf_s("%d", &size);

	//int list[size];     // 물리적으로 봤을 때 배열 할당에 문제 -> 동적 할당으로 바꿔 사용
	int* list = malloc(sizeof(int) * size);
	srand(time(NULL)); // 중복되는 값은 안나옴
	
	printf("숫자 입력 : ");
	for (i = 0; i < size; i++) {
		//scanf_s("%d", &list[i]);
		list[i] = (rand() % 100) + 1;
	}

	//int size = sizeof(list) / sizeof(list[0]);
	printf("\n정렬할 원소 : ");
	for (i = 0; i < size; i++) 	printf("%d ", list[i]);	// 정렬 전의 원소 출력
	printf("\n\n<<<<<<<<<< 선택 정렬 수행(오름차순) >>>>>>>>>>\n");
	SelectionSort(list, size);		// 선택 정렬 함수 호출

	printf("\n\n<<<<<<<<<< 선택 정렬 수행 (내림차순) >>>>>>>>>>\n");
	Descending(list, size);

	//getchar(); 
	return 0;
}