#include<stdio.h>
int main() {
    int n;
    printf("Enter the position (n) of the Fibonacci number : ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Please enter a positive integer!");
    }
    int a = 1;
    int b = 1;
    int c;
    if(n == 1 || n == 2) {
        printf("Fibonacci number at position %d is %d", n, a);
    }
    else {
        for(int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
        }
        printf("Fibonacci number at position %d is %d", n, c);

    }
    
    return 0;
}