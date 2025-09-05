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

void PrintValue(int ValueArray[]) {

	for (int i = 0; i < Max; i++) {
		printf("%d", ValueArray[i]);
	}//End if
	
	printf("\n");

}//End Print Value

void Sort(int*) {
}//End Sort

void Swap(int*, int*) {
}//End Swap

int main() {
	int Value[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

	printf("Before: \n");
	PrintValue(Value);

	int SwapX = 3;
	int SwapY = 5;

	printf("x: %d, y: %d \n", SwapX, SwapY);
	Swap(&SwapX, &SwapY);
	printf("x: %d, y: %d \n", SwapX, SwapY);

	Sort(Value);
	printf("After: \n");
	PrintValue(Value);

	return 0;

}//End Main


