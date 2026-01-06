#include<stdio.h>
int factorial(int a, int b);

int main() {
    int n; 
    printf("Enter n : ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++) {
        // Add spaces for proper triangle alignment
        for(int s = 0; s < n-i; s++) {
            printf("  ");
        }
        for(int j = 0; j <= i; j++) {
          printf("%4d", factorial(i,j));
        }
        printf("\n");
    }
    return 0;
}

int factorial(int n, int r) {
    int ifact = 1, jfact = 1, imjfact = 1;
    for(int i = 1; i <= n; i++) ifact = ifact * i;
    for(int j = 1; j <= r; j++) jfact *= j;
    for(int k = 1; k <= (n-r); k++) imjfact *= k;    
    int ncr = ifact / (jfact * imjfact);
    return ncr;
}