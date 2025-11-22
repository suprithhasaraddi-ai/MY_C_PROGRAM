#include <stdio.h>
#include <string.h>
struct Book {
    int id;
    char title[50];
};
int main() {
    int n, key, found = 0;
    printf("Enter number of books: ");
    scanf("%d", &n);
    struct Book books[n];
    printf("\nEnter Book ID and Title for each book:\n");
    for (int i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Enter Book ID: ");
        scanf("%d", &books[i].id);
        printf("Enter Book Title: ");
        scanf(" %[^\n]", books[i].title);   
    }
    printf("\nEnter the Book ID to search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (books[i].id == key) {
            printf("\nBook Found!\n");
            printf("Book ID: %d\n", books[i].id);
            printf("Book Title: %s\n", books[i].title);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nBook with ID %d is NOT available in the shelf.\n", key);
    }
}
