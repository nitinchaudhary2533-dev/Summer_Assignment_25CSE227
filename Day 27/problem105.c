#include <stdio.h>

int main()
{
    int n, i;

    struct Student
    {
        int roll;
        char name[50];
        float marks;
    };

    struct Student s[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Records:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}