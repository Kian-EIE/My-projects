#include <stdio.h>

void selection_sort(int *arr, int size);
void exchange(int *a, int *b);
void print_array(int *arr, int size);

int main() {
	int arr[] = {32, 34, 435, 564, 234, 666, 89, 5, 13, 45};
	print_array(arr, sizeof(arr) / sizeof(arr[0]));

//    Kian_sort(arr, sizeof(arr) / sizeof(arr[0]));
	selection_sort(arr, sizeof(arr) / sizeof(arr[0]));
	print_array(arr, sizeof(arr) / sizeof(arr[0]));
	return 0;
}

void exchange(int *pa, int *pb) {
	int t;
	t = *pa;
	*pa = *pb;
	*pb = t;
}


void print_array(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

/*void Kian_sort(int *arr, int size) {
	int t;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
}*/

void selection_sort(int *arr, int size) {
	int i, j, max;

	for (i = 0; i < size - 1; i++) {
		max = i;
		for (j = i + 1; j < size; j++) {
			if (arr[j] > arr[max]) {
				max = j;
			}
		}
		if (max != i) {
			exchange(&arr[i], &arr[max]);
		}
	}
}
