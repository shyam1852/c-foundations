#include<stdio.h>
long long int factorial(int n);
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    long long int fac = factorial(n);
    printf("Factorial of %d is : %lld", n, fac);
    return 0;
}
long long int factorial(int n) {
    long long int nfactorial = 1;
    for(int i = 1; i <= n; i++) {
        nfactorial = nfactorial * i;
    }
    return nfactorial;
}