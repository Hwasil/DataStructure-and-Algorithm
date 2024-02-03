#include <stdio.h>

//Ch9_ex1
void SelectionSort(int a[], int size) {
	int i, j, t, min, temp;

	for (i = 0; i < size - 1; i++) {
		min = i; // �񱳰�
		for (j = i + 1; j < size; j++) {
			if (a[j] < a[min]) min = j; // �ּڰ� ã��
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
		printf("\n%d�ܰ� : ", i + 1);
		for (t = 0; t < size; t++)  printf("%3d ", a[t]);
	}
}

void Descending(int a[], int size) {
	int i, j, t, min, temp;

	for (i = 0; i < size - 1; i++) {
		min = i;
		for (j = i + 1; j < size; j++) {
			if (a[j] > a[min]) min = j; // �ִ� ã��
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
		printf("\n%d�ܰ� : ", i + 1);
		for (t = 0; t < size; t++)  printf("%3d ", a[t]);
	}
}

//Ch9_ex2
void bubbleSort(int a[], int size) {
	int i, j, t, temp;

	for (i = size - 1; i > 0; i--) {
		printf("\n %d�ܰ�>>", size - i);
		for (j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		printf("\n\t");
		for (t = 0; t < size; t++) printf("%3d ", a[t]);
	}
}

//Ch9_ex5
void insertionSort(int a[], int size) {
	int i, j, t, temp;

	for (i = 1; i < size; i++) {
		temp = a[i];
		j = i;
		while ((j > 0) && (a[j - 1] > temp)) {
			a[j] = a[j - 1];
			j = j - 1;
		}
		a[j] = temp;
		printf("\n %d�ܰ� : ", i);
		for (t = 0; t < size; t++) printf("%3d ", a[t]);
	}
}

void insertionSort2(int a[], int size) {
	int i, j, t, temp;

	for (i = 1; i < size; i++) {
		temp = a[i];
		j = i;
		while ((j > 0) && (a[j - 1] < temp)) { 
			a[j] = a[j - 1];
			j = j - 1;
		}
		a[j] = temp;
		printf("\n %d�ܰ� : ", i);
		for (t = 0; t < size; t++) printf("%3d ", a[t]);
	}
}
