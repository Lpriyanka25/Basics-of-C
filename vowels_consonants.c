#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i;

    // Ask the user to enter the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Display the entered string
    printf("String: %s", str);

    // Count the number of vowels and consonants
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert character to lowercase for case-insensitive comparison

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Display the counts of vowels and consonants
    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}
