//WAP a C program to calculate the area and perimeter of a rectangle based on its length and width
#include <stdio.h>
int main() {
    int length, width, area, perimeter;
    printf("Enter length and width of the rectangle: ");
    scanf("%d %d", &length, &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);
    return 0;
}