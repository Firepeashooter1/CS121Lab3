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

void Sort(int ValueArray[]) {
	int i, j;

	for (i = 0; i < Max - 1; i++) {

		for (j = 0; j < Max - i; j++) {

			if (ValueArray[j] > ValueArray[j + 1]) {
				Swap(i, j);
}//End Sort

void Swap(int SwapX, int SwapY) {
	SwapX = SwapY;

	SwapY = SwapY + 1;
	
}//End Swap

int main() {
	int ValueArray[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

	printf("Before: \n");
	PrintValue(ValueArray);

	int SwapX = 3;
	int SwapY = 5;

	printf("x: %d, y: %d \n", SwapX, SwapY);
	Swap(&SwapX, &SwapY);
	printf("x: %d, y: %d \n", SwapX, SwapY);

	Sort(ValueArray);
	printf("After: \n");
	PrintValue(ValueArray);

	return 0;

}//End Main


