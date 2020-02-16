#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void swap(int *a, int *b) {
        int c = *a;
        *a = *b;
        *b = c;
}

void quicksort(int *array, int len) {
        if (len < 2) {
                return;
        }
        else {
                int pivot = array[0];
                int less_len = 0;
                int greater_len = 0;
                for (int i = 1; i < len; i++) {
                if (array[i] <= pivot) {
                                swap(&array[less_len], &array[i]);
                                less_len++;
                                swap(&array[less_len], &array[i]);
                        }
                        else {
                                greater_len++;
                        }
                }
                quicksort(array, less_len);
                quicksort(&array[less_len + 1], greater_len);
                return;
        }

}

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

int main(int argc, char *argv) {
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
        quicksort(array, length);
        printf("\nArray ascending: ");
        print_array(array, length);
        int check = 0;
        for (int i = 0; i < length - 1; i++) {
                if (array[i + 1] < array[i]) {
                        check = 1;
                }
        }
        if (check == 0) {
                printf("\nTest passed");
        }
        return 0;
}
