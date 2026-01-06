#include<stdio.h>
int main() {
    int n;
    printf("Enter number of rows (odd number) : ");
    scanf("%d", &n);
    int nsp = n/2;
    int nst = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= nsp; j++) {
            if(i <= n/2) {
                printf("  ");
                nsp--;
            }
            else {
                nsp = 1;
                printf("  ");
                nsp++;
            }
        }
        for(int k = 1; k <= nst; k++) {
            if(i <= n/2) {
                printf("* ");
                nst = 2-nst;
            }
            else {
                nst = n-2;
                printf("* ");
                nst = 2-nst;
            }
        }
        printf("\n");
    }
    return 0;
}