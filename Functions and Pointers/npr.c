#include<stdio.h>
long long int factorial(int x);
int main() {
    int n, r;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter r : ");
    scanf("%d", &r);
    
    if(r > n || n < 0 || r < 0) {
        printf("Invalid input! r should be <= n and both should be non-negative.\n");
        return 1;
    }
    
    long long int npr = factorial(n) / factorial(n-r); 
    printf("%lld", npr);
    return 0;
}
long long int factorial(int x) {
    long long int fact = 1;
    for(int i = 1; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}