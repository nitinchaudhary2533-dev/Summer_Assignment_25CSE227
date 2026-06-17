#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Remove all factors of 2
    while (num % 2 == 0) {
        i = 2;
        num /= 2;
    }

    // Check for odd factors
    for (i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            num = num / i;
        }
    }

    // If remaining number is a prime greater than 2
    if (num > 2) {
        i = num;
    }

    printf("Largest prime factor is: %d\n", i);

    return 0;
}