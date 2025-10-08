#include <stdio.h>
int main() {
    int secret = 7, guess;
    printf("Guess the number (1-10): ");
    scanf("%d", &guess);

    while(guess != secret) {
        printf("Wrong! Try again: ");
        scanf("%d", &guess);
    }

    printf("Correct! \n");
    return 0;
}
