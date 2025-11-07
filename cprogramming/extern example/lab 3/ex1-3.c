#include <stdio.h>
#include <string.h>

struct Book {
    int book_id;
    char title[100];
    char author[100];
    float price;
};

void printBookDetails(struct Book b) {
    printf("--- Book Details ---\n");
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: $%.2f\n", b.price);
}

int main() {
    struct Book book1;

    book1.book_id = 101;
    strcpy(book1.title, "The C Programming Language");
    strcpy(book1.author, "Brian W. Kernighan & Dennis M. Ritchie");
    book1.price = 25.99;

    printBookDetails(book1);

    return 0;
}
