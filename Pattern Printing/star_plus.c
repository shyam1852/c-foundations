#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of rows (odd number) : ");
    scanf("%d", &n);
    int a = n / 2 + 1;
    if(n % 2 != 0) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
            if(i == a || j == a) printf("* ");
            else printf("  ");
            }
            printf("\n");
        }
    }
    else printf("Enter a odd number!");    
    return 0;
}