#include<stdio.h>
int main(){
    int init[] = {3,54,85,25,40};
    int arr[100];
    int size = sizeof(init)/sizeof(init[0]);
    int i,index;
    for(i = 0; i < size; i++){
        arr[i] = init[i];
    }
    printf("Original Array:\n");
    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\nEnter index to delete(0 to %d):", size - 1);
    scanf("%d", &index);
    if(index < 0 || index > size -1){
        printf("INVALID INDEX!!");
        return 1;
    }
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;
     printf("\nArray after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}