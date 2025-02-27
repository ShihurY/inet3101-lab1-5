#include <stdio.h>
#include <stdlib.h>

struct book {
    char bookTitle[100];
    int bookNumber;
    int bookPages;
};

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number_of_elements>\n", argv[0]);
        return 1;
    }

    int num_books = atoi(argv[1]);
    struct book* bookArray = (struct book*)malloc(num_books * sizeof(struct book));
    
    printf("\n\nPlease enter information for %d books. Enter a title, book number, and number of pages: \n\n", num_books);
    for (int i = 0; i < num_books; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]%*c", bookArray[i].bookTitle); // %[^\n]%*c is a format specific to allow spaces in a string 
        printf("Book Number: ");
        scanf("%d", &bookArray[i].bookNumber);
        printf("Number of Pages: ");
        scanf("%d", &bookArray[i].bookPages);

        printf("\nYou entered: Title: %s, Book Number: %d, Pages: %d for book at index %d of the allocated memory\n", 
               bookArray[i].bookTitle, bookArray[i].bookNumber, bookArray[i].bookPages, i);
    }

    //print out all the books in the array

    printf("\nHere is the data for all the books in the allocated memory:\n");
    for (int i = 0; i < num_books; i++) {
        printf("Book at Index %d:\n Title: %s\n Book Number: %d\n Pages: %d\n\n", 
               i, bookArray[i].bookTitle, bookArray[i].bookNumber, bookArray[i].bookPages);
    }

    printf("\n");

    free(bookArray);
    return 0;

}

/*

WHAT TO DO

MODIFY THIS CODE

Instead of a stupid example structure (really this is the best you could think of Joe - "myStruct", "myInt", come on man)

Update this code to do something more...real world.

For examle:

Maybe create a structure like this:

struct book {

    char bookTitle[10];
    int bookNumber;
    int bookPages;

};

Example data might be (remember we're just making stuff up here)  Here title is some made-up title.  A made up inventory number.  A made up number of pages (not a very big book...).

bookTitle - Joe's Life
bookNumber - 1234
bookPages - 23


*/
