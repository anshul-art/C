#include<stdio.h>
int main(){
    int i = 0;
    int j = 0;
    for(i = 1;i < 5; i++){
        for(j = 1; j <= 10; j++)
            printf("%4d", i*j);
        
            printf("\n");
    }
    return 0;
}