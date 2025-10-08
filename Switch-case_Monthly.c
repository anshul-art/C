#include<stdio.h>
int main(){
    int num;
    printf("Enter a number from 1-12 to know the month of the year:");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("It's January!!");
        break;
    case 2:
        printf("It's February!!");
        break;    
    case 3:
        printf("It's March!!");
        break;
    case 4:
        printf("It's April!!");
        break;    
    case 5:
        printf("It's May!!");
        break; 
    case 6:
        printf("It's June!!");
        break; 
    case 7:
        printf("It's july!!");
        break; 
    case 8:
        printf("It's August!!");
        break;   
    case 9:
        printf("It's September!!");
        break; 
    case 10:
        printf("It's October!!");
        break;
    case 11:
        printf("It's November!!");
        break;
    case 12:
        printf("It's December!!");
        break;                         
    
    }
    return 0;
}