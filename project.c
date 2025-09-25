/* constrant MAX  is max length of array
 *
 * print value
 *  for i is less than max
 *   print vault of array of i
 *
 * swap
 *  make temporay equal x
 *  make x equal y
 *  max y equal tempoary
 *
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

void PrintValue(int *ValueArray) {
    printf("[");
    
    for (int i = 0; i < Max; i++) {
        printf("%d ", *(ValueArray + i)); 
    }//End for i
    
    printf("]\n");
}//End PrintValue

void Swap(int *SwapX, int *SwapY) {
    int Temporary = *SwapX;
    *SwapX = *SwapY;
    *SwapY = Temporary;
}//End Swap

void Sort(int *ValueArray) {

    for (int i = 0; i < Max - 1; i++) {

        for (int j = 0; j < Max - i - 1; j++) {
            int *current = ValueArray + j;
            int *next = ValueArray + j + 1;

            if (*current > *next) {
                Swap(current, next);
                PrintValue(ValueArray);
            }//End if

        }//End for j
	
    }//End for i

}//End Sort

int main() {
    int ValueArray[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

    printf("Before: \n");
    PrintValue(ValueArray);

    int x = 3;
    int y = 5;
    int *ptrX = &x;
    int *ptrY = &y;

    printf("x: %d, y: %d \n", *ptrX, *ptrY);
    Swap(ptrX, ptrY);
    printf("x: %d, y: %d \n", *ptrX, *ptrY);

    Sort(ValueArray);

    printf("After: \n");
    PrintValue(ValueArray);

    return 0;
}//End main

