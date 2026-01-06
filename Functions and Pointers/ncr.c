#include<stdio.h>
int factorial(int x);
int main() {
    int n, r;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter r : ");
    scanf("%d", &r);
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    int ncr = nfact/(rfact * nrfact);
    printf("%d", ncr);
    return 0;
}

int factorial(int x) {
    int a = 1;
    for(int i = 1; i <= x; i++) {
        a = a * i;
    }
    return a;
}