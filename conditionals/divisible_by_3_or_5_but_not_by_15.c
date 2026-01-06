/*Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.*/
#include<Stdio.h>
int main() {
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    if(x % 5 == 0 || x % 3 == 0) {
        if(x % 15 !=0) {
            printf("%d is divisible by 5 or 3 but not by 15", x);
        }
        else {
            printf("%d is divisible by 5 or 3 and also by 15", x);
        }
    }
    else {
        printf("%d is not divisible by 5 or 3 or 15", x);
    }
    return 0;
}