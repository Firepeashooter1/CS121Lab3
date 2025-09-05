/* constrant MAX  is max length of array
 * function sort (arry);
 * 	create an integer variables i and j
 * 	for i from zero to MAX - 1:
 * 		for j from zero to MAX - 1:
 * 			if array[j] > array[j+i]:
 * 				swap array[j] woth array[j+1]
 * 				printArray(array)
 *
 */

#include <stdio.h>

const int Max = 9;

void PrintValue(int ValueArray[], int ValueSize) {
	for (int i = 0; i < ValueSize; i++) {
		printf("%d", ValueSize[i]);
	}//End if
	 //
}//End Print Value

void Sort(int*) {
}//End Sort

void Swap(int*, int*) {
}//End Swap

int main() {
	int Value[Max] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

	printf("Before: \n");
	PrintValue(Value, Max);

	int SwapX = 3;
	int SwapY = 5;

	printf("x: %d, y: %d \n", SwapX, SwapY);
	swap(&SwapX, &SwapY);
	printf("x: %d, y: %d \n", SwapX, SwapY);

	Sort(Vaule);
	printf("After: \n");
	PrintValue(Value, Max);

	return 0;

}//End Main


