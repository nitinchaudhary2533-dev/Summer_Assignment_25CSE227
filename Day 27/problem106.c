#include <stdio.h>

int main()
{
    int n, i;

    struct Employee
    {
        int id;
        char name[50];
        float salary;
    };

    struct Employee e[100];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\nEmployee Records:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nID: %d\n", e[i].id);
        printf("Name: %s\n", e[i].name);
        printf("Salary: %.2f\n", e[i].salary);
    }

    return 0;
}