#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, originalNum, remainder, digits;
    int result;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        originalNum = num;
        result = 0;
        digits = 0;

        // count number of digits
        int temp = num;
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;

        // calculate Armstrong sum
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, digits);
            temp /= 10;
        }

        if (result == originalNum) {
            printf("%d ", originalNum);
        }
    }

    return 0;
}