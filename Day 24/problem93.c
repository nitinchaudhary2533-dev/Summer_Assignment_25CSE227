#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int len1 = 0, len2 = 0, i;

    while(str1[len1] != '\0' && str1[len1] != '\n')
        len1++;

    while(str2[len2] != '\0' && str2[len2] != '\n')
        len2++;

    if(len1 != len2)
    {
        printf("Strings are not rotations.");
        return 0;
    }

    for(i = 0; i < len1; i++)
        temp[i] = str1[i];

    for(i = 0; i < len1; i++)
        temp[len1 + i] = str1[i];

    temp[2 * len1] = '\0';

    for(i = 0; i < len1; i++)
    {
        int j;
        for(j = 0; j < len1; j++)
        {
            if(str2[j] != temp[i + j])
                break;
        }
        if(j == len1)
        {
            printf("Strings are rotations.");
            return 0;
        }
    }

    printf("Strings are not rotations.");

    return 0;
}