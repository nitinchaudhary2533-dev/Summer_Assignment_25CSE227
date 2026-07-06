#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact
{
    char name[50];
    char phone[15];
};

struct Contact contacts[MAX];
int count = 0;

void addContact()
{
    printf("Enter Name: ");
    scanf(" %[^\n]", contacts[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", contacts[count].phone);

    count++;

    printf("Contact added successfully.\n");
}

void displayContacts()
{
    int i;

    if(count == 0)
    {
        printf("No contacts available.\n");
        return;
    }

    printf("\nContact List\n");

    for(i = 0; i < count; i++)
    {
        printf("%d. %s - %s\n", i + 1, contacts[i].name, contacts[i].phone);
    }
}

void searchContact()
{
    char name[50];
    int i, found = 0;

    printf("Enter Name to Search: ");
    scanf(" %[^\n]", name);

    for(i = 0; i < count; i++)
    {
        if(strcmp(contacts[i].name, name) == 0)
        {
            printf("Name : %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Contact not found.\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                printf("Thank You.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}