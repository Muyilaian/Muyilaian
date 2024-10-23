//c program with prompt
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
    struct book myBook;

    printf("Enter book title: ");
    fgets(myBook.title, sizeof(myBook.title), stdin);
    myBook.title[strcspn(myBook.title, "\n")] = '\0'; 
    printf("Enter author's name: ");
    fgets(myBook.author, sizeof(myBook.author), stdin);
    myBook.author[strcspn(myBook.author, "\n")] = '\0';

    printf("Enter publication year: ");
    scanf("%d", &myBook.publication_year);

    printf("Enter ISBN: ");
    scanf("%s", myBook.ISBN);

    printf("Enter price: ");
    scanf("%f", &myBook.price);

    printf("\nBook Details:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);

    return 0;
}