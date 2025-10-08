//Even-odd
#include<stdio.h>
int main() {
    int number, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;  // Store original number for comparison

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    // Check if palindrome
    if (original == reversed) {
        printf("The number %d is a Palindrome.", original);
    } else {
        printf("The number %d is NOT a Palindrome.", original);
    }

    return 0;
}

