#include <main.h>

void swap_int(int *a, int *b) {
    int temp = *a;  // Stocke la valeur de *a dans temp
    *a = *b;        // Assigne la valeur de *b à *a
    *b = temp;      // Assigne la valeur de temp (ancien *a) à *b
}

int main() {
	int x = 5, y = 10;

	printf("Before swap: x = %d, y = %d\n", x, y);
	swap_int(&x, &y);  // Passe les adresses de x et y
	printf("After swap: x = %d, y = %d\n", x, y);

	return (0);
}

