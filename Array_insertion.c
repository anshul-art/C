#include<stdio.h>
int main(){
    int arr[100],i,n;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Original array:");
    for(i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    int index,value;
    printf("Enter the index to insert the value(0 to %d)", n);
    scanf("%d", &index);
    printf("Enter the element to insert:");
    scanf("%d", &value);
    
    for(i = n; i > index; i--){
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    n++;
    for(i = 0; i < n; i++){
        printf("%d\n",arr[i]);
    }
    return 0;

    
}