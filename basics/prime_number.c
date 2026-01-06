#include<stdio.h>
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int a = 1;
    for(int i = 2; i <= n-1; i++) {
        if(n % i == 0) {
            a = 0;
            break;
        }
    }
    if(n == 1) printf("1 is neither prime nor composite");
    else if(a == 1) printf("It is a prime number");
    else printf("It is a composite number");
    return 0;
}