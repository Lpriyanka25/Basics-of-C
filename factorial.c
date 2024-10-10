#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int num;
    int result;

    // Ask the user to enter the number
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Calculate the factorial using recursion
    result = factorial(num);

    // Display the result
    printf("Factorial of %d = %d\n", num, result);

    return 0;
}
