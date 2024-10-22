#include <stdio.h>
#include <string.h>

int main() {
    char firstString[100];
    char secondString[100];

    printf("Enter the first string: ");
    fgets(firstString, sizeof(firstString), stdin);

    // Remove the newline character from the first string
    if (strlen(firstString) > 0 && firstString[strlen(firstString) - 1] == '\n')
        firstString[strlen(firstString) - 1] = '\0';

    printf("Enter the second string: ");
    fgets(secondString, sizeof(secondString), stdin);

    // Remove the newline character from the second string
    if (strlen(secondString) > 0 && secondString[strlen(secondString) - 1] == '\n')
        secondString[strlen(secondString) - 1] = '\0';

    // Concatenate the second string to the end of the first string
    strcat(firstString, secondString);

    printf("Joined string: %s\n", firstString);

    return 0;
}
