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
void Swap(int *SwapX, int *SwapY) {
	
	int Temporary = *SwapX;
	*SwapX = *SwapY;
	*SwapY = Temporary;

}//End Swap

void Sort(int ValueArray[]) {
	int i, j;

	for (i = 0; i < Max - 1; i++) {

		for (j = 0; j < Max - i; j++) {

			if (ValueArray[j] > ValueArray[j + 1]) {
				Swap(&ValueArray[j], &ValueArray[j + 1]);
			}//End if

		}//End j for

	}//End i for
	
}//End Sort

int main() {
	int ValueArray[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

	printf("Before: \n");
	PrintValue(ValueArray);

	int SwapX = 3;
	int SwapY = 5;

	printf("x: %d, y: %d \n", SwapX, SwapY);
	printf("x: %d, y: %d \n", SwapX, SwapY);

	Sort(ValueArray);
	printf("After: \n");
	PrintValue(ValueArray);

	return 0;

}//End Main


