/*Ques : Take positive integer input and tell if it is divisible by 5 and 3. */

#include<stdio.h>
int main() {
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);
    if(x % 3 == 0 || x % 5 == 0) {
        printf("%d is divisible by 5 or 3", x);
    }
    else {
        printf("%d is not divisible by 5 or 3", x);
    }
    return 0;
}