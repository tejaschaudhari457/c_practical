//TEJAS VILAS CHAUDHARI

// Initialize and Print Details of a Book


#include <stdio.h>

typedef struct {
    char title[100];
    int publicationYear;
} Book;

void initializeBook(Book* book, const char* title, int year) {
    snprintf(book->title, sizeof(book->title), "%s", title);
    book->publicationYear = year;
}

int main() {
    Book myBook;
    initializeBook(&myBook, "The reader", 1999);
    printf("name of book %s\nn Publication Year %d\n", myBook.title, myBook.publicationYear);
    return 0;
}
