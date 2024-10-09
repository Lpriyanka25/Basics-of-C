#include <stdio.h>
#include <math.h>

// Function to calculate the area of a triangle
float areaOfTriangle(float base, float height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a circle
float areaOfCircle(float radius) {
    return 3.14* radius * radius;
}

// Function to calculate the area of a rectangle
float areaOfRectangle(float length, float width) {
    return length * width;
}

int main() {
    int choice;
    float result = 0;

    printf("Choose the shape to calculate the area:\n");
    printf("1. Triangle\n");
    printf("2. Circle\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Triangle
            {
                float base, height;
                printf("Enter the base and height of the triangle: ");
                scanf("%f %f", &base, &height);
                result = areaOfTriangle(base, height);
                break;
            }
        case 2: // Circle
            {
                float radius;
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                result = areaOfCircle(radius);
                break;
            }
        case 3: // Rectangle
            {
                float length, width;
                printf("Enter the length and width of the rectangle: ");
                scanf("%f %f", &length, &width);
                result = areaOfRectangle(length, width);
                break;
            }
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    printf("The area is: %.2f\n", result);

    return 0;
}
