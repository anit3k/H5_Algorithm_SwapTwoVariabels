#include <stdio.h>

void Swap(int* a, int* b) {
	int temp = *a; // set value from a to temp
	*a = *b; // set value from b to a
	*b = temp; // set temp to b
}

int main() {
	int x = 5, y = 10; // declare and initialize two integers
	printf("Before swap: x = %d, y = %d\n", x, y);
	Swap(&x, &y); // swap the integers
	printf("After swap: x = %d , y = %d\n", x, y);
	return 0;
}
