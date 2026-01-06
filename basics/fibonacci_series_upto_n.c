#include<stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int c;
    printf("1, 1, ");
    for(int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d", c);
        if(i < n) {
            printf(", ");
        }
        
    }
    return 0;
}