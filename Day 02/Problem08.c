#include <stdio.h>

int main() {
    int num, original, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    if (original == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}