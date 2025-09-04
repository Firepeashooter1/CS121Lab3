#include <stdio.h>

const int Max = 9;

void printVal(int*) {}
void sort(int*) {}
void swap(int*, int*) {}

int main() {
	int val[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

	printf("Before: \n");
	printVal(val);

	//text swap
	int x = 3;
	int y = 5;

	printf("x: %d, y: %d \n", x, y);
	swap(&x, &y);
	printf("x: %d, y%d \n", x, y);

	sort(val);
	printf("After: \n");
	printVal(val);

	return 0;

}//end main


