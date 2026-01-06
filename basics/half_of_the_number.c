#include<stdio.h>
int main() {
    float a;
    printf("Enter the number : ");
    scanf("%f", &a);
    float b = a/2;
    printf("Half of %.0f is %.1f", a, b);
    return 0;
}