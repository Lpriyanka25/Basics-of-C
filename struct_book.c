#include <stdio.h>

// Structure to represent a book
struct book {
    char book_name[100];
    char author_name[100];
    float price;
};

int main() {
    int n;
    int i;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of books should be greater than 0.\n");
        return 1;
    }

    // Array of books to store book details
    struct book books[n];

    // Accept information for each book
    for (i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Book Name: ");
        getchar(); // Consume the newline character left by previous scanf
        fgets(books[i].book_name, sizeof(books[i].book_name), stdin);

        printf("Author Name: ");
        fgets(books[i].author_name, sizeof(books[i].author_name), stdin);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    // Display books whose price is between 500 and 1000
    printf("\nBooks with price between 500 and 1000:\n");
    for (i = 0; i < n; i++) {
        if (books[i].price >= 500.0 && books[i].price <= 1000.0) {
            printf("Book Name: %s", books[i].book_name);
            printf("Author Name: %s", books[i].author_name);
            printf("Price: %.2f\n", books[i].price);
            printf("-----------------------------\n");
        }
    }

    return 0;
}
