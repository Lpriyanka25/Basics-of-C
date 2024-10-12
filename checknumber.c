#include <stdio.h>

// Function to check whether the number is positive, negative, or zero
void checkNumber(int num) {
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    } else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("The number is zero.\n");
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkNumber(num);

    return 0;
}
