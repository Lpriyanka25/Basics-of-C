#include <stdio.h>

// Function to display n odd natural numbers and calculate their sum
void displayAndSumOddNumbers(int n) {
    int sum = 0;
    int i;
    printf("First %d odd natural numbers: ", n);
    for (i = 1; n > 0; i += 2, n--) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nSum of first %d odd natural numbers: %d\n", n, sum);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. n should be a positive integer.\n");
        return 1;
    }

    displayAndSumOddNumbers(n);

    return 0;
}
