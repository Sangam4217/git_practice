#include <stdio.h>

void biggest2() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d is bigger\n", a);
    else
        printf("%d is bigger\n", b);
}

