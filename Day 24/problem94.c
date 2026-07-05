#include <stdio.h>

int main()
{
    char str[100], result[200];
    int i = 0, j = 0, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n')
    {
        char current = str[i];
        count = 0;

        while(str[i] == current && str[i] != '\0' && str[i] != '\n')
        {
            count++;
            i++;
        }

        result[j++] = current;
        result[j++] = count + '0';
    }

    result[j] = '\0';

    printf("Compressed string: %s", result);

    return 0;
}