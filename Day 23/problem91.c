#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; str1[i] != '\0' && str1[i] != '\n'; i++)
    {
        count1[(unsigned char)str1[i]]++;
    }

    for(i = 0; str2[i] != '\0' && str2[i] != '\n'; i++)
    {
        count2[(unsigned char)str2[i]]++;
    }

    for(i = 0; i < 256; i++)
    {
        if(count1[i] != count2[i])
        {
            printf("Strings are not anagrams.");
            return 0;
        }
    }

    printf("Strings are anagrams.");

    return 0;
}