#include <stdio.h>

float power(float base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        return (1 / base) * power(base, exponent + 1);
    }
}

int main() {
    float base, result;
    int exponent;

    // Ask the user to enter the base and exponent
    printf("Enter the base number: ");
    scanf("%f", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Call the recursive function to calculate the power
    result = power(base, exponent);

    // Display the result
    printf("%.2f ^ %d = %.2f\n", base, exponent, result);

    return 0;
}
