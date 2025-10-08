#include <stdio.h>

int main() {
    int password;
    int attempts = 0;
    const int correct_password = 1234;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if(password == correct_password) {
            printf("✅ Access Granted!\n");
            break;  // Exit the loop if correct
        } else {
            printf("❌ Incorrect Password. Try again.\n");
        }

        attempts++;

    } while(attempts < 3);  // Only 3 chances allowed

    if(password != correct_password) {
        printf("🚫 Access Denied! Too many failed attempts.\n");
    }

    return 0;
}
