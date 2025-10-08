#include<stdio.h>
int main(){
    int arr[5] = {92,81,72,45,49};
    int size = sizeof(arr)/sizeof(arr[0]);
    int value,i, found = 0;
    printf("Original array: ");
    for(i = 0; i < size; i++){
        printf("%d\n", arr[i]);
    }
    printf("Enter the value to search:");
    scanf("%d", &value);
    for(i = 0; i < size; i++){
         if(arr[i] == value){
            printf("The %d is found at index %d", value, i);
            found = 1;
            break;
         }
    }
    if(!found){
        printf("the %d is not found", value);
    }
    return 0;

}