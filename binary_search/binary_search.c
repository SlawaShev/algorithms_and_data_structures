#include "stdio.h"

//Function gets pointer to array, number that we need to find and length of array.
//It returns number position if array has number or -1 if array hasn't
int binary_search(int array[], int num, int length) {
	int high = length - 1;
	int low = 0;
	int mid;
	while (low <= high) {
		mid = (high - low) / 2 + low;
		if (array[mid] == num) {
			return mid;
		}
		else if (array[mid] < num) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}	
	return -1;	
}

int main(int argc, char argv[]) {
	int myarray[10] = {1,2,3,4,6,8,20,64,123,5465};
	printf("Input number ");
	int number;
	scanf("%d", &number);
	int length = 10;
	printf("\nThe index is %i", binary_search(myarray, number, length));
	return 0;
}
