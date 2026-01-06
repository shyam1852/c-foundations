#include<stdio.h>
int fibonacci(int n);
int main() {
    int n;
    printf("Enter the position (n) of the Fibonacci number : ");
    scanf("%d", &n);
    
    int result = fibonacci(n);
    if(result != -1) {
        printf("Fibonacci number at position %d is %d\n", n, result);
    }
    
    return 0;
}
int fibonacci(int n) {
    if(n <= 0) {
        printf("Enter a positive integer!\n");
        return -1; // Return error value
    }
    
    if(n == 1 || n == 2) return 1;  // F(1) = 1, F(2) = 1
    
    return fibonacci(n-1) + fibonacci(n-2);
}