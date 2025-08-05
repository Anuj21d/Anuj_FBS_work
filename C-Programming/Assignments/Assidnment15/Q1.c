#include <stdio.h>
struct Book {
    char bname[100];
    int id;
    char author[100];
    float price;
};
void main() {
    struct Book b;

    printf("Enter Book Name: ");
    gets(b.bname);

    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    getchar();

    printf("Enter Author Name: ");
    gets(b.author);

    printf("Enter Book Price: ");
    scanf("%f", &b.price);

    printf("\n--- Book Details ---\n");
    printf("Book Name: %s\n", b.bname);
    printf("Book ID: %d\n", b.id);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);

}