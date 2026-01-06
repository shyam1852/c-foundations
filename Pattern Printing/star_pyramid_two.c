#include<stdio.h>
int main() {
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int nsp = 1;
    int nst = n-1;  // Changed from n to n-1
    
    // Top row
    for(int u = 1; u <= 2*n-1; u++) {  // Changed from 2*n+1 to 2*n-1
        printf("* ");
    }
    printf("\n");
    
    // Subsequent rows
    for(int i = 1; i <= n-1; i++) {  // Changed from n to n-1
        for(int j = 1; j <= nst; j++) {
            printf("* ");
        }
        for(int k = 1; k <= nsp; k++) {
            printf("  ");
        }
        for(int j = 1; j <= nst; j++) {
            printf("* ");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}