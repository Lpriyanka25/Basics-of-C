#include <stdio.h>
#include <string.h>

int main() {
    char source[100];
    char copiedstring[100];

    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

    // Remove the newline character from the source string
    if (strlen(source) > 0 && source[strlen(source) - 1] == '\n')
        source[strlen(source) - 1] = '\0';

    // Copy the source string to the destination string
    strcpy(copiedstring, source);

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", copiedstring);

    return 0;
}
