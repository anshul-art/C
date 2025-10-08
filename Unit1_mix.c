#include <stdio.h>
#include <math.h>

int main() {
    int choice, d, num, i, isComposite = 0, factorial = 1;
    float a, b, c;
    const float pie = 3.14;

    printf("Choose an operation by entering its number:\n");
    printf("------------------------------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Area of Circle\n");
    printf("6. Area of Rectangle\n");
    printf("7. Area of Square\n");
    printf("8. Area of Triangle\n");
    printf("9. Simple Interest\n");
    printf("10. Compound Interest\n");
    printf("11. Even or Odd\n");
    printf("12. Prime or Composite\n");
    printf("13. Factorial\n");
    printf("------------------------------------------\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter first number to add: ");
            scanf("%f", &a);
            printf("Enter second number to add: ");
            scanf("%f", &b);
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;

        case 2:
            printf("Enter first number to subtract: ");
            scanf("%f", &a);
            printf("Enter second number to subtract: ");
            scanf("%f", &b);
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;

        case 3:
            printf("Enter first number to multiply: ");
            scanf("%f", &a);
            printf("Enter second number to multiply: ");
            scanf("%f", &b);
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;

        case 4:
            printf("Enter first number to divide: ");
            scanf("%f", &a);
            printf("Enter second number to divide: ");
            scanf("%f", &b);
            if (b == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;

        case 5:
            printf("Enter the radius of the circle: ");
            scanf("%f", &a);
            printf("The area of the circle with radius %.2f is %.2f\n", a, pie * a * a);
            break;

        case 6:
            printf("Enter length: ");
            scanf("%f", &a);
            printf("Enter breadth: ");
            scanf("%f", &b);
            printf("The area of rectangle with length %.2f and breadth %.2f is %.2f\n", a, b, a * b);
            break;

        case 7:
            printf("Enter the side of square: ");
            scanf("%f", &a);
            printf("The area of square with side %.2f is %.2f\n", a, a * a);
            break;

        case 8:
            printf("Enter height: ");
            scanf("%f", &a);
            printf("Enter base: ");
            scanf("%f", &b);
            printf("The area of triangle with height %.2f and base %.2f is %.2f\n", a, b, 0.5 * a * b);
            break;

        case 9:
            printf("Enter Principal: ");
            scanf("%f", &a);
            printf("Enter Rate: ");
            scanf("%f", &b);
            printf("Enter Time: ");
            scanf("%f", &c);
            printf("Simple Interest = %.2f\n", (a * b * c) / 100.0);
            break;

        case 10:
            printf("Enter Principal: ");
            scanf("%f", &a);
            printf("Enter Rate: ");
            scanf("%f", &b);
            printf("Enter Time: ");
            scanf("%f", &c);
            printf("Compound Interest = %.2lf\n", a * pow((1 + b / 100), c) - a);
            break;

        case 11:
            printf("Enter a number to check if it's even or odd: ");
            scanf("%d", &d);
            if (d % 2 == 0) {
                printf("The number is EVEN.\n");
            } else {
                printf("The number is ODD.\n");
            }
            break;

        case 12:
            printf("Enter a number to check if it's prime or composite: ");
            scanf("%d", &num);
            if (num <= 1) {
                printf("The number is neither prime nor composite.\n");
            } else {
                for (i = 2; i < num; i++) {
                    if (num % i == 0) {
                        isComposite = 1;
                        break;
                    }
                }
                if (isComposite) {
                    printf("%d is a composite number.\n", num);
                } else {
                    printf("%d is a prime number.\n", num);
                }
            }
            break;

        case 13:
            printf("Enter a positive integer: ");
            scanf("%d", &num);
            if (num < 0) {
                printf("Factorial is not defined for negative numbers.\n");
            } else {
                for (i = 1; i <= num; i++) {
                    factorial *= i;
                }
                printf("Factorial of %d is: %d\n", num, factorial);
            }
            break;

        default:
            printf("Enter a valid option!!\n");
            break;
    }

    return 0;
}
