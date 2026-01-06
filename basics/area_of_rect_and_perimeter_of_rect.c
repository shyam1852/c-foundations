/*Ques : Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle 
is greater than its perimeter.*/

#include<stdio.h>
int main() {
    float length, breadth, area, perimeter;
    printf("Enter the length : ");
    scanf("%f", &length);
    printf("Enter the breadth : ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area is %.2f\n", area);
    printf("Perimeter is %.2f\n", perimeter);
    if(area > perimeter) {
        printf("Area of rectangle is greater than perimeter");
    }
    else if (area == perimeter) {
        printf("Area of rectangle is equal to perimeter");
    }
    else {
        printf("Area of rectangle is not greater than perimeter");
    }
    return 0;
}