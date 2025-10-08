#include <stdio.h>
#include <string.h>

int main() {
    char name[100] = "Anshul";   // Original name
    char name1[100];              // Copy of name

    // Step 1: Copy name to name1
    strcpy(name1, name);

    // Step 2: Compare the copied string with original
    if (strcmp(name1, name) == 0) {
        // Step 3: If match, append "dongre" to name
        strcat(name, "dongre");
    } else {
        printf("The strings do not match.\n");
    }

    // Print the final result
    printf("Result: %s\n", name);

    return 0;
}
