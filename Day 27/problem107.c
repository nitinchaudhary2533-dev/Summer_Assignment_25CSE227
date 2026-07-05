#include <stdio.h>

int main()
{
    int n, i;

    struct Employee
    {
        int id;
        char name[50];
        float basic, hra, da, gross;
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

        printf("Basic salary: ");
        scanf("%f", &e[i].basic);

        e[i].hra = 0.20 * e[i].basic;
        e[i].da = 0.10 * e[i].basic;
        e[i].gross = e[i].basic + e[i].hra + e[i].da;
    }

    printf("\nSalary Details:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nID: %d\n", e[i].id);
        printf("Name: %s\n", e[i].name);
        printf("Basic: %.2f\n", e[i].basic);
        printf("HRA: %.2f\n", e[i].hra);
        printf("DA: %.2f\n", e[i].da);
        printf("Gross Salary: %.2f\n", e[i].gross);
    }

    return 0;
}