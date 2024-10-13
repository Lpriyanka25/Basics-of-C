#include <stdio.h>
#include <math.h>

// Function to calculate the hypotenuse of a right-angled triangle
float calculateHypotenuse(double side1, double side2) {
    return sqrt(side1 * side1 + side2 * side2);
}

int main() {
    float side1, side2;

    printf("Enter the length of side 1: ");
    scanf("%f", &side1);

    printf("Enter the length of side 2: ");
    scanf("%f", &side2);

    if (side1 <= 0 || side2 <= 0) {
        printf("Invalid input. Side lengths must be positive.\n");
    } else {
        float hypotenuse = calculateHypotenuse(side1, side2);
        printf("The hypotenuse of the right-angled triangle is: %.2f\n", hypotenuse);
    }

    return 0;
}
