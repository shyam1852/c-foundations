#include<stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int a = 1;
    if(n == 1) {
        printf("1");
        return 0;
    }   
    if(n == 2) {
        printf("1");
        return 0;
    }   
    int b = 1;
    int c;
    for(int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    printf("The %d Fibonacci number is %d",n ,c);
    return 0;
}