#include <stdio.h>

void factorial() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter a number for factorial: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial of %d = %llu\n", n, fact);
}

