/*Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).*/
#include<stdio.h>
int main() {
    float x, y;
    printf("Enter the x coordinate : ");
    scanf("%f", &x);
    printf("Enter the y coordinate : ");
    scanf("%f", &y);
    if(x == 0 && y == 0) {
        printf("Points lie on the origin");
    }
    else if(x == 0) {
        printf("Points lie on y coordinate");
    }
    else if(y == 0) {
        printf("Points lie on x coordinate");
    }
    else {
        printf("Points doesn't lie on x axis or y axis or at origin");
    }
    return 0;
}