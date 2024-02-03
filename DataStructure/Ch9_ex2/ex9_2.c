#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void bubbleSort(int a[], int size);

int main(void) {
    //int i, list[8] = { 69, 10, 30, 2, 16, 8, 31, 22 };   // 정렬할 원소 
    //int size = sizeof(list) / sizeof(list[0]);

    int i, size;

    printf("입력할 숫자 개수 : ");
    scanf_s("%d", &size);

    //int list[size];
    int* list = malloc(sizeof(int) * size);
    srand(time(NULL));

    //printf("숫자 입력 : ");
    //scanf("%d", &list);
    for (i = 0; i < size; i++) {
        list[i] = (rand() % 100) + 1;
    }

    printf("\n정렬할 원소 : ");
    for (i = 0; i < size; i++)  printf("%d ", list[i]); // 정렬 전의 원소 출력

    printf("\n\n<<<<<<<<<< 버블 정렬 수행 >>>>>>>>>>\n");
    bubbleSort(list, size);      // 버블 정렬 함수 호출

    //getchar();  
    return 0;
}