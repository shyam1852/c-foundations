#include<stdio.h>
int main() {
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        int a = 1;
        int b = 1;
        for(int j = 1; j <= i; j++) {
            if(i % 2 != 0) {
                printf("%d ", a);
                a++;
            }
            else {
            char ch = (char)(b+64);
            printf("%c ", ch);
            b++;
            }
            
        }
        printf("\n");
    }
    return 0;
}