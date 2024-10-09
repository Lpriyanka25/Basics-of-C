#include <stdio.h>

void decimalToBinary(int decimal) {
    int binary[32]; // Assume 32-bit binary representation
    int index = 0;
    int i;

    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }

    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }

    printf("Binary: ");
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimal;

    // Ask the user for the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Call the user-defined function to convert decimal to binary
    decimalToBinary(decimal);

    return 0;
}
