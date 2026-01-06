/* take four positive inputs and print the greatest of them*/
#include<stdio.h>
int main() {
    int a, b, c, d;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the third number : ");
    scanf("%d", &c);
    printf("Enter the fourth number : ");
    scanf("%d", &d);
    if(a >= b && a >= c && a >= d) {
        printf("%d is max", a);
    }
    else if(b >= a && b >= c && b >= d) {
        printf("%d is max", b);
    }
    else if(c >= b && c >= a && c >= d) {
        printf("%d is max", c);
    }
    else {
        printf("%d is max", d);
    }
    return 0;
}