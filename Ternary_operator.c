#include<stdio.h>
#include <limits.h>
int sum1(int x,int y){
    return x + y;   
}
int main(){
    int num,x,y;
    printf("enter num to sum: ");
    scanf("%d",&x);
    printf("enter num to sum: ");
    scanf("%d",&y);
    num = sum1(x,y);
    (num < 0) ? printf(" %d is Negative",num) : printf("%d is Positive", num);
    printf("Signed int min: %d\n", INT_MIN);
    printf("Signed int max: %d\n", INT_MAX);

    return 0;
}