#include<stdio.h>   //Standard,Input-Output preprocessor command
#include<math.h>    //Header file
int main(){
    int choice;
    float length,breadth,height,radius,base;
    const float pie = 3.14;
      printf("Enter the choice number to perform operations:\n");
    printf("1. Area of circle\n2. Area of square\n3. Area of Rectangle\n4. Area of Triangle\n"); 
    scanf("%d", &choice);           //User-Input
    if (choice == 1){               //If-statement
        printf("To Calculate the area of circle, Enter following values:");  //Circle
        printf("\nEnter Radius: ");
        scanf("%f", &radius);
        printf("The Area of circle is: %f", pie*radius*radius);
    }
    else if (choice == 2){
        printf("To Calculate the area of square, Enter following values:");  //Square
        printf("\nEnter Length: ");
        scanf("%f", &length);
        printf("The Area of Square is: %f", length*length);
    }
    
    else if (choice == 3){
        printf("To Calculate the area of rectangle, Enter following values:"); //Rectangle
        printf("\nEnter Length: ");
        scanf("%f", &length);
        printf("Enter Breadth: ");
        scanf("%f", &breadth);
        printf("The Area of rectangle is: %f", length*breadth);
    }
    else if (choice == 4){
        printf("To Calculate the area of Triangle, Enter following values:"); //Triangle
        printf("\nEnter height: ");
        scanf("%f", &height);
        printf("Enter Base: ");
        scanf("%f", &base);
        printf("The Area of triangle is: %f", 0.5*height*base);
    }
      else {
        printf("Invalid choice! Please enter 1 to 4.\n");
    }

    
}