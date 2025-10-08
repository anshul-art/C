#include<stdio.h>   //pre-processor header file
int main(){
    int number;
    printf("Enter the number to check if it's Even or Odd: ");
    scanf("%d", &number); //User-input
    if (number % 2 == 0){  //If-statement
        printf("The number is even");
    }
    else if (number % 2 != 0){   //Else-if statement
        printf("The number is odd");
    }
    else if (number < 0){
        printf("Invalid input!!");

    }
    return 0;
}