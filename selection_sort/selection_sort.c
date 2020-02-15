#include "stdio.h"
#include "time.h"
#include "stdlib.h"

//That function gets int array and its length as parameters and returns ascending sorted list with selection sort
void selection_sort_ascending(int *array, int length) {
	int min_idx;
	int tmp;
	for (int i = 0; i < length; i++) {
		min_idx = i;
		for (int a = i; a < length; a++) {
			if (array[a] < array[min_idx]) {
				min_idx = a;
			}	
		}
		tmp = array[i];
		array[i] = array[min_idx];
		array[min_idx] = tmp;
	}
	return;
}

//That function gets int array and its length as parameters and returns descending sorted list with selection sort
void selection_sort_descending(int *array, int length) {
	int max_idx;
	int tmp;
	for (int i = 0; i < length; i++) {
		max_idx = i;
		for (int a = i; a < length; a++) {
			if (array[a] > array[max_idx]) {
				max_idx = a;
			}	
		}
		tmp = array[i];
		array[i] = array[max_idx];
		array[max_idx] = tmp;
	}
	return;
}

//That function passes random values to array
void array_random_value(int *array, int length) {
	srand(time(NULL));
	for (int i = 0; i < length; i++) {
		array[i] = rand() % 100000;
	}
	return;
}

//That function print array to stdout
void print_array(int *array, int length) {
	printf("[");
	for (int i = 0; i < length; i++) {
		printf("%i ", array[i]);
	}
	printf("]");
}

int main() {
	int length;
	//offer to user to choose length of array
	printf("Input length of array ");
	scanf("%i", &length);
	//give memory to array
	int *array = malloc(length * sizeof(int));
	//pass random values to array
	array_random_value(array, length);
	printf("\nArray initial: ");
	print_array(array, length);
	selection_sort_ascending(array, length);
	printf("\nArray ascending: ");
	print_array(array, length);
	selection_sort_descending(array, length);
	printf("\nArray descending: ");
	print_array(array, length);
	free(array);
	return 0;
}
