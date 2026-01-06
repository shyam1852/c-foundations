/*Take 3 numbers input and tell if they
can be the sides of a triangle.*/
#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter the first side of the triangle : ");
    scanf("%d", &a);
    printf("Enter the second side of the triangle : ");
    scanf("%d", &b);
    printf("Enter the third side of the triangle : ");
    scanf("%d", &c);
    if((a + b) > c && (b + c) > a && (c + a) > b) {
        printf("Yes they can form a triangle");
    }
    else {
        printf("They cant form a triangle");
    }
    return 0;
}