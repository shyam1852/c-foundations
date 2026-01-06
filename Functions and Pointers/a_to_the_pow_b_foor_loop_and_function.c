#include<stdio.h>
int power(int n, int p);
int main() {
    int n, p;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Enter the power of %d : ", n);
    scanf("%d", &p);
    int result = power(n, p);
    printf("%d", result);
    return 0;
}
int power(int n, int p) {
    int pow = 1;
    for(int i = 1; i <= p; i++) {
        pow = pow * n;
    }
    return pow;
}