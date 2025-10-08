#include <stdio.h>
#include <string.h>  

int main() {
    char name[50];         
    char grade[5];         
    char result[100] = "Result: ";  
    int marks;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  

    printf("Enter your marks (0 - 100): ");
    scanf("%d", &marks);
    
    if (marks >= 90) {
        strcpy(grade, "A+");
    } else if (marks >= 80) {
        strcpy(grade, "A");
    } else if (marks >= 70) {
        strcpy(grade, "B");
    } else if (marks >= 60) {
        strcpy(grade, "C");
    } else if (marks >= 50) {
        strcpy(grade, "D");
    } else {
        strcpy(grade, "F");
    }

    strcat(result, "Your grade is ");
    strcat(result, grade);

    printf("\n--- Report Card ---\n");
    printf("Name   : %s", name); 
    printf("Marks  : %d\n", marks);
    printf("Grade  : %s\n", grade);

    if (strcmp(grade, "F") == 0) {
        printf("Status : Failed\n");
    } else {
        printf("Status : Passed\n");
    }

    printf("%s\n", result);

    return 0;
}
