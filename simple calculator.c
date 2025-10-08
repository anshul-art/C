#include<stdio.h>       //Pre-processor command

int main() {
    int choice, a, b;

    printf("Enter the number to perform operations:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);   //User-Input

    if (choice == 1) {      //If-statement             //Addition
        printf("Enter 1st number: ");
        scanf("%d", &a);
        printf("Enter 2nd number: ");
        scanf("%d", &b);
        printf("The addition of %d and %d is: %d\n", a, b, a + b);
    } 
    else if (choice == 2) {  //Subtraction
        printf("Enter 1st number: ");
        scanf("%d", &a);
        printf("Enter 2nd number: ");
        scanf("%d", &b);
        printf("The subtraction of %d and %d is: %d\n", a, b, a - b);
    } 
    else if (choice == 3) { //Multiplication
        printf("Enter 1st number: ");
        scanf("%d", &a);
        printf("Enter 2nd number: ");
        scanf("%d", &b);
        printf("The multiplication of %d and %d is: %d\n", a, b, a * b);
    } 
    else if (choice == 4) { //Division
        printf("Enter 1st number: ");
        scanf("%d", &a);
        printf("Enter 2nd number: ");
        scanf("%d", &b);
        if (b != 0)
            printf("The division of %d and %d is: %.2f\n", a, b, (float)a / b);
        else
            printf("Error: Division by zero is not allowed.\n");
    } 
    else {      
        printf("Invalid choice! Please enter 1 to 4.\n");
    }

    return 0;
}
