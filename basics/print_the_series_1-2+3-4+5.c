//      SHORT METHOD --->
#include<stdio.h>
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int sum = 0;
    if(n % 2 == 0) {
        sum = -n / 2;
    }
    else {
        sum = - n / 2 + n;
    }
    printf("Sum of the series 1-2+3-4+...%s%d = %d", (n % 2 == 0) ? "-" : "+", n, sum);
    return 0;
}

//      LONG METHOD --->
// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);
//     int original = n;
//     int odd = 0;
//     int even = 0;
//     int sum;
//     for(int i = 1; i <= n; i++) {
//         if(i % 2 != 0) {
//             odd = odd + i;
//         }
//         else {
//             even = even + i;
//         }
//     }
//     sum = -1 * (even) + odd;
//     printf("Sum of series 1-2+3-4+...%s%d = %d", (n % 2 != 0) ? "+" : "-", n, sum);
//     return 0;
// }