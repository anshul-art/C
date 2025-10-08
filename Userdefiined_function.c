#include<stdio.h>       //Header file
int sum(int x, int y){   //Sum function()
    return x + y;
}
int subtract(int x, int y){     //Subtract function()
    return x - y;
}
int multiply(int x, int y){     //Multiplication function()
    return x*y;
}
int division(int x, int y){     //Division function()
    return x/y;
}
int main(){                     //Main function()
    int choice,a,b;             //Variable declaration
    printf("Enter the number to perform operation: \n");  
    printf("1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division\n");
    scanf("%d",&choice);        //Input from user
    if(choice == 1){            //If-statement
        printf("Enter first number:");
        scanf("%d",&a);
        printf("Enter second number:");
        scanf("%d",&b);
        printf("%d",sum(a,b));
    }
    if(choice == 2){
        printf("Enter first number:");
        scanf("%d",&a);
        printf("Enter second number:");
        scanf("%d",&b);
        printf("%d",subtract(a,b));
    }
    if(choice == 3){
        printf("Enter first number:");
        scanf("%d",&a);
        printf("Enter second number:");
        scanf("%d",&b);
        printf("%d",multiply(a,b));
    }
    if(choice == 4){
        printf("Enter first number:");
        scanf("%d",&a);
        printf("Enter second number:");
        scanf("%d",&b);
        printf("%d",division(a,b));
    }
    return 0;               
}