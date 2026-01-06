#include<stdio.h>
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int original = n;
    int last_digit;
    int r = 0;
    if(n < 0) n = (-1) * n;
    while(n > 0) {
        last_digit = n % 10;
        r = r * 10;
        r = r + last_digit;          // OR // r = r + (n % 10);   //without using a variable last_digit
        n = n / 10;
    }
    printf("Reverse of the number %d is %d", original, r);
    return 0;
}