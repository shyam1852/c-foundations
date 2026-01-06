#include<stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int original = n;
    if(n == 0) {    // checks for the case if n is 0
    printf("No of digits : 1");
    return 0;
    }
    if(n < 0) {     // converts negative into positive
        n = - n;
    }
    int count = 0;
    while(n > 0) {
        n = n / 10;
        count++;
    }
    
    printf("No of digits present in %d : %d", original, count);
    return 0;
}