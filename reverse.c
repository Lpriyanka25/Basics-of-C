#include <stdio.h>

// Function to calculate the sum of digits of a number
int calculateSumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

// Function to print the reverse of a number
void printReverseNumber(int number) {
    printf("Reverse of %d is: ", number);
    while (number != 0) {
        printf("%d", number % 10);
        number /= 10;
    }
    printf("\n");
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int sumOfDigits = calculateSumOfDigits(num);
    printf("Sum of digits of %d is: %d\n", num, sumOfDigits);

    printReverseNumber(num);

    return 0;
}
