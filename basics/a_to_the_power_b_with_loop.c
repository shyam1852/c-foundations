 #include<stdio.h>
 int main() {
    int a, b;
    int c = 1;
    printf("Enter base : ");
    scanf("%d", &a);
    printf("Enter power : ");
    scanf("%d", &b);
    for(int i = 1; i <= b; i++) {
        c = c * a;
    }
    printf("%d raised to the power %d is %d",a, b, c);
    return 0;
 }