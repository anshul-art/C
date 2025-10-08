#include <stdio.h>

int main() {
    int arr[100];  // declaring an array with max size 100
    int n, i;

    // Taking size input
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Taking array input
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Displaying array in reverse order
    printf("Array elements in reverse order:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
