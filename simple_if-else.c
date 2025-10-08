#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b) {               // Outer if
        if (a >= c) {           // Inner if
            printf("%d is the largest.\n", a);
        } else {
            printf("%d is the largest.\n", c);
        }
    } else {                    // Outer else
        if (b >= c) {           // Inner if
            printf("%d is the largest.\n", b);
        } else {
            printf("%d is the largest.\n", c);
        }
    }

    return 0;
}
