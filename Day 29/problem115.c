#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Find Length of First String\n");
        printf("2. Copy First String to Second String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length of first string = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("After copying, Second String = %s\n", str2);
                break;

            case 3:
                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;

            case 4:
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}