#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, k = 0;
    char result[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; str1[i] != '\0' && str1[i] != '\n'; i++)
    {
        for(j = 0; str2[j] != '\0' && str2[j] != '\n'; j++)
        {
            if(str1[i] == str2[j])
            {
                int found = 0;
                for(int m = 0; m < k; m++)
                {
                    if(result[m] == str1[i])
                    {
                        found = 1;
                        break;
                    }
                }

                if(!found)
                {
                    result[k++] = str1[i];
                }
                break;
            }
        }
    }

    result[k] = '\0';

    printf("Common characters: %s", result);

    return 0;
}