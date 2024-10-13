#include <stdio.h>

// Function to swap numbers in cyclic order
void cyclicSwap(int *a, int *b, int *c) {
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Before swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    cyclicSwap(&num1, &num2, &num3);

    printf("After swapping in cyclic order: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    return 0;
}
