#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void bubbleSort(int a[], int size);

int main(void) {
    //int i, list[8] = { 69, 10, 30, 2, 16, 8, 31, 22 };   // ������ ���� 
    //int size = sizeof(list) / sizeof(list[0]);

    int i, size;

    printf("�Է��� ���� ���� : ");
    scanf_s("%d", &size);

    //int list[size];
    int* list = malloc(sizeof(int) * size);
    srand(time(NULL));

    //printf("���� �Է� : ");
    //scanf("%d", &list);
    for (i = 0; i < size; i++) {
        list[i] = (rand() % 100) + 1;
    }

    printf("\n������ ���� : ");
    for (i = 0; i < size; i++)  printf("%d ", list[i]); // ���� ���� ���� ���

    printf("\n\n<<<<<<<<<< ���� ���� ���� >>>>>>>>>>\n");
    bubbleSort(list, size);      // ���� ���� �Լ� ȣ��

    //getchar();  
    return 0;
}