/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.*/
#include<stdio.h>
int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Enter the coordinates of point 1 (x1 y1) : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of point 2 (x2 y2) : ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the coordinates of point 3 (x3 y3) : ");
    scanf("%d %d", &x3, &y3);
    // int slope_AB, slope_BC;
    // slope_AB =
        if(((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1))) {
            printf("The points are collinear (lie on the straight line)");
        }
        else {
            printf("The points are not collinear");
        }
    return 0;
}