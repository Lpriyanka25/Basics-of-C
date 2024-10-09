#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int i;

    // Ask the user to enter the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Display the entered string
    printf("String: %s", str);

    // Count the length of the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            length++;
        }
    }

    // Display the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}
