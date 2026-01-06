#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int last_digit;
    int original = n;
    int multiply;
    int sum = 0;
    int count = 0;      //count how many digits are present
    int n1 = n;
    while(n1 > 0) {
        n1 = n1 / 10;
        count++;
    }
    for(int i = 1; i <= count; i++) {
        last_digit = n % 10;
        multiply = pow(last_digit, count);
        sum = sum + multiply;
        n = n / 10;
    }
    if(original == sum) {
        printf("%d is an Armstrong number!", original);
    }
    else {
        printf("%d is not an Armstrong number!", original);
    }
    return 0;
}