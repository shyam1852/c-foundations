#include<stdio.h>
int main() {
    int a = 2;
    int b;
    printf("Enter the power : "); 
    scanf("%d", &b);
    long long int c = 1;
    for(int  i = 1; i <= b; i++) {
        c = c * a;
        printf("2 raise to the power %d is %lld\n", i, c);
    }
    return 0;
}