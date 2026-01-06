#include<stdio.h>
int main() {
    int n;
    printf("ENter a number : ");
    scanf("%d", &n);
    float a = 100;
    for(int i = 1; i<=n; i++) {
        printf("%.2f", a);
        if(i < n) printf(", ");
        a = a * 0.5;
    }
    return 0;
}