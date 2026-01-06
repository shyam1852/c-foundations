#include<stdio.h>
int main() {
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int nsp = n/2;
    int nst = 1;
    int ml = n/2+1;
    if(n % 2 != 0) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= nsp; j++) {
            printf("  ");
            }
            for(int k = 1; k <= nst; k++) {
                printf("* ");
            }
            if(i < ml) {
                nsp--;
                nst+=2;
            }
            else {
                nsp++;
                nst-=2;
            }
            printf("\n");
        }
    }
    else {
        printf("Enter a odd number!");
    }
    return 0;
}


// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter number of rows : ");
//     scanf("%d", &n);
//     for(int i = 1; i <= n/2+1; i++) {
//         for(int s = 1; s <= n/2+1-i; s++) {
//             printf("  ");
//         }
//         for(int j = 1; j <= 2*i-1; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     int a = 2*(n/2)-1;
//     for(int i = 1; i <= n/2; i++) {
//         for(int s = 1; s <= i; s++) {
//             printf("  ");
//         }
//         for(int j = 1; j <= a; j++) {
//             printf("* ");
//         }
//         a = a-2;
//         printf("\n");
//     }
//     return 0;
// }