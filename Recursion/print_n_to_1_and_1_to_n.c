#include<stdio.h>
void dec(int n);
void in(int n);
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    dec(n);
    in(n);
    return 0;
}
void dec(int n) {
    if(n == 0) return;
    printf("%d\n", n);
    dec(n-1);
    return;
}
void in(int n) {
    if(n == 0) return;
    in(n-1);
    printf("%d\n", n);
    return;
}