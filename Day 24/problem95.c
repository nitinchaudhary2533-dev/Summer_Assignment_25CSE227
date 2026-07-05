#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, len = 0, maxLen = 0, start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n')
    {
        if(str[i] != ' ')
        {
            if(len == 0)
                start = i;

            len++;
        }
        else
        {
            if(len > maxLen)
            {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
        }
        i++;
    }

    if(len > maxLen)
    {
        maxLen = len;
        maxStart = start;
    }

    printf("Longest word: ");

    for(i = maxStart; i < maxStart + maxLen; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}