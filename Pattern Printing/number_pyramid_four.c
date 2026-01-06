#include<stdio.h>
int main() {
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int nnum = n-1;
    int nsp = 1;
    for(int s = 1; s <= n; s++) {
        printf("%d ", s);
    }
    for(int s = n-1; s >= 1; s--) {
        printf("%d ", s);
    }
    printf("\n");
    for(int i = 1; i <= n-1; i++) {
        int a = 1;
        for(int j = 1; j <= nnum; j++) {
            printf("%d ", a);
            a++;
        }
        for(int j = 1; j <= nsp; j++) {
            printf("  ");
        }
        a--;
        for(int j = 1; j <= nnum; j++) {
            printf("%d ", a);
            a--;
            
        }
        nnum--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}