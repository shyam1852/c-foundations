#include<stdio.h>
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int sum = 0;
    int last_digit;
    int original;
    original = n;
    while(n != 0) {
        last_digit = n % 10;
        sum = sum + last_digit;
        n = n / 10;
    }
    printf("Sum of the digits of %d : %d", original, sum);
    return 0;
}