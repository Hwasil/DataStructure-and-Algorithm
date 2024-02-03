#include <stdio.h>
void SelectionSort(int a[], int size) {
	int i, j, t, min, temp;

	for (i = 0; i < size - 1; i++) {
		min = i; // 비교값
		for (j = i + 1; j < size; j++) {
			if (a[j] < a[min]) min = j; // 최솟값 찾기
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
		printf("\n%d단계 : ", i + 1);
		for (t = 0; t < size; t++)  printf("%3d ", a[t]);
	}
}

void Descending(int a[], int size) {
	int i, j, t, min, temp; 

	for (i = 0; i < size - 1; i++) {
		min = i;
		for (j = i + 1; j < size; j++) {
			if (a[j] > a[min]) min = j; // 최댓값 찾기
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
		printf("\n%d단계 : ", i + 1);
		for (t = 0; t < size; t++)  printf("%3d ", a[t]);
	}
}