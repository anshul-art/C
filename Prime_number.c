#include<stdio.h>
#include<conio.h>
void main(){
    int i,num, iscomposite = 0;
    printf("Enter a number to check if it's prime or composite:");
    scanf("%d",&num);
    if(num <= 1){
        printf("The number is neither prime or composite");
    }
    else{
        for(i = 2; i < num; i++){
            if(num % i == 0){
                iscomposite = 1;
                break;

            }
            
        }
    }
    if(iscomposite){
        printf("%d is a composite number", num);
    }
    else{
        printf("%d is a prime number", num);
    }
   getch();  
}