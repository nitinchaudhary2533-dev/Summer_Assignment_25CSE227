#include <stdio.h>

int main() {
    int x, n;
    long long result = 1;
    int i;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (n): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative exponent not supported in this program.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        result = result * x;
    }

    printf("Result: %lld\n", result);

    return 0;
}