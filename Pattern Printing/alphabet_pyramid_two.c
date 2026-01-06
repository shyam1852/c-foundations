#include<stdio.h>
int main() {
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++) {
            printf("  ");
        }
        for(int j = 1; j <= i; j++) {
            char ch = (char) (64 + j);
            printf("%c ", ch);
        }
        for(int k = 1; k <= i-1; k++) {
            char ch2 = (char) (64 + k);
            printf("%c ", ch2);
        }
        printf("\n");
    }
    return 0;
}