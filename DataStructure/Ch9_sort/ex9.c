#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void SelectionSort(int a[], int size);
void Descending(int a[], int size);
void bubbleSort(int a[], int size);
void insertionSort(int a[], int size);
void insertionSort2(int a[], int size);

int main(void) {
	int i, size;

	printf("�Է��� ���� ���� >> ");
	scanf_s("%d", &size);

	//int list[size];     // ���������� ���� �� �迭 �Ҵ翡 ���� -> ���� �Ҵ����� �ٲ� ���
	int* list = malloc(sizeof(int) * size);
	srand(time(NULL)); // �ߺ��Ǵ� ���� �ȳ���

	//printf("���� �Է� : ");
	for (i = 0; i < size; i++) {
		//scanf_s("%d", &list[i]);
		list[i] = (rand() % 100) + 1;
	}

	//int size = sizeof(list) / sizeof(list[0]);
	printf("\n������ ���� : ");
	for (i = 0; i < size; i++) 	printf("%d ", list[i]);	// ���� ���� ���� ���

	//ex9_1 ���� ���� �Լ� ȣ��
	//printf("\n\n<<<<<<<<<< ���� ���� ����(��������) >>>>>>>>>>\n");
	//SelectionSort(list, size);		

	//printf("\n\n<<<<<<<<<< ���� ���� ���� (��������) >>>>>>>>>>\n");
	//Descending(list, size);

	//ex9_2 ���� ���� �Լ� ȣ��
	//printf("\n\n<<<<<<<<<< ���� ���� ���� >>>>>>>>>>\n");
	//bubbleSort(list, size);     

	//ex9_5
.3	printf("\n\n<<<<<<<<<< ���� ���� ���� (��������) >>>>>>>>>>\n");
	insertionSort(list, size);

	printf("\n\n<<<<<<<<<< ���� ���� ���� (��������) >>>>>>>>>>\n");
	insertionSort2(list, size);

	//getchar(); 
	return 0;
}





