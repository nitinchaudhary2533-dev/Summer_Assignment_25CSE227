#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n;

void inputData()
{
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void displayData()
{
    int i;

    printf("\nStudent Records\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }
}

void searchStudent()
{
    int roll, i, found = 0;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found\n");
            printf("Roll Number: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student not found.\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                inputData();
                break;

            case 2:
                displayData();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}