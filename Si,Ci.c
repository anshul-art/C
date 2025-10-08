#include<stdio.h>
#include<math.h>
int main(){
    int choice;
    double principal,rate,time;
    printf("Enter the choice number to perform operation:\n");
    printf("1. Simple Interest\n 2. Compound Interest\n");
    scanf("%d", &choice);
    if (choice == 1){
        printf("To calculate Simple Interest, Enter following values: \n");
        printf("Enter Principal:");
        scanf("%lf", &principal);
        printf("\nEnter Rate:");
        scanf("%lf", &rate);
        printf("\nEnter time:");
        scanf("%lf", &time);
        printf("\nSimple interest : %lf", (principal*rate*time)/100.0);
        printf("\nThe total amount after %lf years is %lf", time, ((principal*rate*time)/100.0) + principal );
    }
    else if (choice == 2){
        printf("To calculate Compound Interest, Enter following values: \n");
        printf("Enter Principal:");
        scanf("%lf", &principal);
        printf("\nEnter Rate:");
        scanf("%lf", &rate);
        printf("\nEnter time:");
        scanf("%lf", &time);
        printf("\nCompound Interest: %.2lf", principal*pow((1+rate/100),time) - principal);
        printf("The total amount after %.2lf years is %.2lf", time, principal*pow((1+rate/100),time));
    }
    else {
        printf("Invalid choice! Please enter 1 to 2.\n");
    }
    return 0;
    
    
}