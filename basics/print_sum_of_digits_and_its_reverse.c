#include<stdio.h>
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int original = n;
    int last_digit;
    int sum;
    int r = 0;
    while(n > 0) {
        last_digit = n % 10;
        r = r * 10;
        r = r + last_digit;
        n = n / 10;
    }
    sum = original + r;   
    printf("Sum of %d and %d is %d", original, r, sum);
    return 0;
}