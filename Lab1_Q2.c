#include <stdio.h>

int main() {
    float height, width, area, perimeter;

    // Prompt the user to enter the height and width
    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);
    
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area and perimeter
    area = height * width;
    perimeter = 2 * (height + width);

    // Display the results
    printf("The area of the rectangle is: %.2f\n", area);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}