#include <stdio.h>

int main()
{
    char str[100], result[100];
    int i, j = 0, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        for(k = 0; k < j; k++)
        {
            if(result[k] == str[i])
                break;
        }

        if(k == j)
        {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("String after removing duplicates: %s", result);

    return 0;
}