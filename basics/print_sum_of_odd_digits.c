#include<stdio.h>
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int original = n;
    int sum = 0;
    int last_digit;
    while(n != 0) {
        last_digit = n % 10;
        if(n % 2 != 0) {
            sum = sum + last_digit;
        }
        n = n / 10;
    }
    printf("Sum of odd digits of %d : %d", original, sum);
    return 0;
}