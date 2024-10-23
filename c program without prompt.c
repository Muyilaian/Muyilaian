//c program without prompt
/*
Author:Muyila Wekesa ian
Reg no.:CT101/G/24568/24
Date:23/10/2024
*/
#include <stdio.h>
#include <string.h>

struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {

    struct book myBook = {
        "Introduction to C Programming",
        "John Smith",
        2022,
        "9780131103627",
      49.99
    };

    
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);

    return 0;
}