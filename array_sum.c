#include<stdio.h>
int main(){
    int arr[100],i,n;
    int result = 0;
    printf("Enter the number of elements to store: ");
    scanf("%d", &n);
    printf("Enter elements of array:");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        result += arr[i];
    }
    printf("The sum of array elements is: %d", result);
    return 0;
}