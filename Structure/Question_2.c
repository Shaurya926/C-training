// This program demonstrates the use of structures in C to store and display information about a book.
#include <stdio.h>
#include <string.h>
struct Book {
    char title[50];
    char author[50];
    int publicationYear;
    float price;
};
void displayBookInfo(struct Book book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Publication Year: %d\n", book.publicationYear);
    printf("Price: $%.2f\n", book.price);
}
int main() {
    struct Book myBook;

    // Assigning values to the structure members
    strcpy(myBook.title, "The Great Gatsby");
    strcpy(myBook.author, "F. Scott Fitzgerald");
    myBook.publicationYear = 1925;
    myBook.price = 10.99;

    // Displaying the book information
    displayBookInfo(myBook);

    return 0;
}