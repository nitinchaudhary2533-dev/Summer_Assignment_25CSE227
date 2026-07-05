#include <stdio.h>

int main()
{
    int n, i;
    
    struct Student
    {
        int roll;
        char name[50];
        float sub1, sub2, sub3, total, percent;
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

        printf("Marks of subject 1: ");
        scanf("%f", &s[i].sub1);

        printf("Marks of subject 2: ");
        scanf("%f", &s[i].sub2);

        printf("Marks of subject 3: ");
        scanf("%f", &s[i].sub3);

        s[i].total = s[i].sub1 + s[i].sub2 + s[i].sub3;
        s[i].percent = (s[i].total / 300) * 100;
    }

    printf("\nMarksheet:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Subject 1: %.2f\n", s[i].sub1);
        printf("Subject 2: %.2f\n", s[i].sub2);
        printf("Subject 3: %.2f\n", s[i].sub3);
        printf("Total: %.2f\n", s[i].total);
        printf("Percentage: %.2f%%\n", s[i].percent);
    }

    return 0;
}