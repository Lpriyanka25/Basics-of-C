#include <stdio.h>

int main() {
    int n;
    int i,j;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Read the elements of the array from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count the number of duplicate elements in the array
    int duplicateCount = 0;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                break; // Break to avoid counting the same duplicate element multiple times
            }
        }
    }

    // Display the number of duplicate elements
    printf("Total number of duplicate elements: %d\n", duplicateCount);

    return 0;
}
