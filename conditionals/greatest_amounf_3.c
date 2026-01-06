/* take three positive inputs and print the greatest of them*/

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the third number : ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is greatest amoung all", a);
    }
    else if (a <= b && b >= c)
    {
        printf("%d is greatest amoung all", b);
    }
    else
    {
        printf("%d is greatest amoung all", c);
    }
    return 0;
}