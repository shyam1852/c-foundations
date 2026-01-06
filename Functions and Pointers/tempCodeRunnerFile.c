#include<stdio.h>
void factorial(int a, int b);

int main() {
    int n; printf("Enter n : ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= i; j++) {
            factorial(i,j);
        }
        printf("\n");
    }
    return 0;
}
void factorial(int a, int b) {
    int ifact = 1;
    int jfact = 1;
    int imjfact = 1;
    for(int i = 1; i <= a; i++) {
        ifact = ifact*i;
    }
    for(int j = 1; j <= b; j++) {
        jfact = jfact*j;
    }
    for(int k = 1; k <= (a-b); k++) {
        imjfact = imjfact*k;
    }
    int ncr = ifact / (jfact * imjfact);
    printf("%d ", ncr);
    return;
}