#include <stdio.h>

// Recursive function to reverse a number
int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;  // base case
    }
    rev = rev * 10 + (n % 10);
    return reverseNumber(n / 10, rev);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    int sign = 1;
    if (num < 0) {
        sign = -1;
        num = -num;
    }

    int result = reverseNumber(num, 0);

    printf("Reversed number = %d\n", result * sign);

    return 0;
}