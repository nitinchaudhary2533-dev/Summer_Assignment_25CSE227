#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Author Name: ");
        scanf(" %[^\n]", b[i].author);
    }

    printf("\nLibrary Records\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook ID: %d\n", b[i].id);
        printf("Book Title: %s\n", b[i].title);
        printf("Author Name: %s\n", b[i].author);
    }

    return 0;
}