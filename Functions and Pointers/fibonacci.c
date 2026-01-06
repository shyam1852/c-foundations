#include<stdio.h>
void fibonacci(int n);
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Fibonacci series upto %d numbers is :\n", n);
    fibonacci(n);
    
    return 0;
}
void fibonacci(int n) {
    if(n >= 1) printf("1");
    if(n >= 2) printf(", 1");
    int a = 1;
    int b = 1;
    int c;
    for(int i = 3; i <= n; i++) {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }
    printf("\n");
    return;
}