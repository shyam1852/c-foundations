#include<stdio.h>
int  main() {
    float a;
    printf("Enter the decimal number : ");
    scanf("%f", &a);
    int b = a;
    float c = a - b;
    printf("Yours fractional part of %f is %f", a, c);
    return 0;
}