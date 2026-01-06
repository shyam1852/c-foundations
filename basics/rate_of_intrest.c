#include<stdio.h>
int main() {
    float principal, rate, time, simple_intrest, total;
    printf("Enter the pricipal : ");
    scanf("%f", &principal);
    printf("Enter the rate of intrest : ");
    scanf("%f", &rate);
    printf("Enter the time : ");
    scanf("%f", &time);
    simple_intrest = (principal * rate * time) /100;
    total = simple_intrest + principal;
    printf("Simple Intrest = Rs %f", simple_intrest);
    printf("\nTotal amount = Rs %f", total);
    return 0;
}