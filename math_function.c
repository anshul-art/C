#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int choice,a;
    printf("Welcome to the simple calculator program! \n");
    printf("What math function would u like to use : \n");
    printf(" 1.Square of the number \n 2.Square root\n 3.Power \n 4.Cube \n 5.Cube root \n 6.Sin\n 7.Cos \n 8.Tan \n");
    printf(" 9.log Function \n 10.exponential \n 11.Round-Up \n 12.Round-down \n 13.Absolute value\n");
    scanf("%d",&choice);

    if(choice == 1){
        printf("Enter a number to get a square of it: ");
        scanf("%d",&a);
        printf("Square: %d", a*a);
    }
    else if(choice == 2){
        printf("Enter a number to get its square root: ");
        scanf("%d", &a);
        printf("Square root: %.2f", sqrt(a));
    }
    else if(choice == 3){
        int b;
        printf("Enter base: ");
        scanf("%d", &a);
        printf("Enter exponent: ");
        scanf("%d", &b);
        printf("Power: %.2f", pow(a, b));
    }
    else if(choice == 4){
        printf("Enter a number to get cube of it: ");
        scanf("%d", &a);
        printf("Cube: %d", a*a*a);
    }
    else if(choice == 5){
        printf("Enter a number to get cube root of it: ");
        scanf("%d", &a);
        printf("Cube root: %.2f", cbrt(a));
    }
    else if(choice == 6){
        printf("Enter angle in degrees: ");
        scanf("%d", &a);
        printf("Sin: %.2f", sin(a * 3.14159 / 180));
    }
    else if(choice == 7){
        printf("Enter angle in degrees: ");
        scanf("%d", &a);
        printf("Cos: %.2f", cos(a * 3.14159 / 180));
    }
    else if(choice == 8){
        printf("Enter angle in degrees: ");
        scanf("%d", &a);
        printf("Tan: %.2f", tan(a * 3.14159 / 180));
    }
    else if(choice == 9){
        printf("Enter number to apply log function: ");
        scanf("%d", &a);
        printf("log(base e): %.2f", log(a));
    }
    else if(choice == 10){
        printf("Enter number to apply exponential function: ");
        scanf("%d", &a);
        printf("e^x: %.2f", exp(a));
    }
    else if(choice == 11){
        float x;
        printf("Enter a float to round up: ");
        scanf("%f", &x);
        printf("Rounded up: %.0f", ceil(x));
    }
    else if(choice == 12){
        float x;
        printf("Enter a float to round down: ");
        scanf("%f", &x);
        printf("Rounded down: %.0f", floor(x));
    }
    else if(choice == 13){
        double num;
        printf("Enter any number to get absolute value: ");
        scanf("%lf", &num);

        if(num == (int)num){
            printf("Absolute value (int): %d", abs((int)num));
        }
        else{
            printf("Absolute value (float): %.2f", fabs(num));
        }
    }
    else{
        printf("Invalid Choice");
    }

    return 0;
}
