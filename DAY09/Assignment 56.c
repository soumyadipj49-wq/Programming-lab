#include <stdio.h>

struct Book {
    int id;
    char name[100];
    char author[100];
    float price;
};

int main() {
    struct Book books[10];
    int i;

    printf("Enter information for 10 books:\n");

    for (i = 0; i < 10; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Enter Book ID: ");
        scanf("%d", &books[i].id);

        printf("Enter Book Name: ");
        getchar();  // to consume the newline left by previous scanf
        fgets(books[i].name, sizeof(books[i].name), stdin);

        printf("Enter Author Name: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);

        printf("Enter Book Price: ");
        scanf("%f", &books[i].price);
    }

    printf("\n------ Book Information ------\n");
    printf("%-5s %-30s %-25s %-10s\n", "ID", "Book Name", "Author", "Price");

    for (i = 0; i < 10; i++) {
        // Remove trailing newlines from strings (optional)
        books[i].name[strcspn(books[i].name, "\n")] = '\0';
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        printf("%-5d %-30s %-25s $%.2f\n", books[i].id, books[i].name, books[i].author, books[i].price);
    }

    return 0;
}

