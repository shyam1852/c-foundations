#include<stdio.h>
int factorial(int n);
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("Factorial of %d is %d", n, fact);
    return 0;
}
int factorial(int n) {
    if(n == 1 || n == 0) return  1;
    return n * factorial(n - 1);
}   