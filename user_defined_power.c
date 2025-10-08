#include <stdio.h>

int pow1(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;   // multiply result by x, y times
    }
    return result;
}

int main() {
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);

    int result = pow1(a, b);
    printf("%d raised to the power %d is %d\n", a, b, result);

    return 0;
}
