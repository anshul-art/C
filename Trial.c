#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;
    int largest_num;
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number:\n");
    scanf("%d", &num2);
    printf("Enter the third number:\n");
    scanf("%d", &num3);
    if(num1 > num2 && num1 > num3){
           largest_num = num1;
        }
    else if(num2 > num1 && num2 > num3){    
            largest_num = num2;
        }
    
    else if(num3 > num1 && num3 > num2){
        largest_num = num3;
    }
    printf("The largest no. of three of them is: %d", largest_num);
    return 0;
}
