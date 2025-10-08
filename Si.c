#include<stdio.h>
#include<math.h>
int main(){
    int choice;
    double principal,rate,time;
    printf("Enter the choice number to perform operation:");
    printf("1. Simple Interest\n 2. Compound Interest");
    scanf("%d", &choice);
    if (choice == 1){
        printf("To calculate Simple Interest, Enter following values: ");
        printf("Enter Principal:");
        scanf("%lf", &principal);
        printf("Enter Rate:");
        scanf("%lf", &rate);
        printf("Enter time:");
        scanf("%lf", &time);
        printf("Simple interest : %lf", (principal*rate*time)/100.0);
        printf("The total amount after %lf years is %lf", time, ((principal*rate*time)/100.0) + principal );
    }
    else if (choice == 2){
        printf("To calculate Compound Interest, Enter following values: ");
        printf("Enter Principal:");
        scanf("%lf", &principal);
        printf("Enter Rate:");
        scanf("%lf", &rate);
        printf("Enter time:");
        scanf("%lf", &time);
        printf("Compound Interest: %lf", principal*pow((1+rate/100),time) - principal);
        printf("The total amount after %lf years is %lf", time, principal*pow((1+rate/100),time));
    }
    else {
        printf("Invalid choice! Please enter 1 to 2.\n");
    }
    return 0;
    
    
}