#include<stdio.h>
 int main() {
    int n;
    int factorial = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        factorial = factorial * i;
        printf("%d! = %d\n",i, factorial);
    }
    return 0;
}
// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++) {
//         int factorial = 1;
//         for(int j = 1; j <= i; j++) {
//             factorial = factorial * j;
//         }
//         printf("%d! = %d\n",i, factorial);
//     }
//     return 0;
// }