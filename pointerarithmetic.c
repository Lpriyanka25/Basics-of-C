#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n],i;

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pointer to the first element of the array
    int *ptr = arr;

    printf("Array elements using pointer arithmetic: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    // Pointer arithmetic: Moving the pointer to the next element
    ptr++; // Move the pointer one position forward
    printf("After ptr++: %d\n", *ptr);

    // Pointer arithmetic: Moving the pointer to the previous element
    ptr--; // Move the pointer one position backward
    printf("After ptr--: %d\n", *ptr);

    // Pointer arithmetic: Moving the pointer to an arbitrary position
    int offset = 2;
    ptr = arr + offset; // Move the pointer to the third element (index 2)
    printf("After ptr = arr + %d: %d\n", offset, *ptr);

    // Pointer arithmetic: Accessing elements using an offset
    offset = 4;
    printf("Element at index %d: %d\n", offset, *(ptr + offset));

    return 0;
}
