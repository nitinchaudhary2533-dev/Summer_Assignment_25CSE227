#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int sum = 0, totalSum, missing;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    totalSum = (n + 1) * (n + 2) / 2;

    missing = totalSum - sum;

    printf("Missing number = %d", missing);

    return 0;
}