#include<stdio.h>

// Recursive function to calculate a^b
int power(int a, int b) {
    // Base case: any number raised to power 0 is 1
    if (b == 0) {
        return 1;
    }
    // Recursive case: a^b = a * a^(b-1)
    return a * power(a, b - 1);
}

int main() {
    int a, b;
    
    printf("Enter base (a): ");
    scanf("%d", &a);
    
    printf("Enter exponent (b): ");
    scanf("%d", &b);
    
    int result = power(a, b);
    printf("%d ^ %d = %d\n", a, b, result);
    
    return 0;
}