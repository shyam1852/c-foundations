#include<stdio.h>
int main() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i <= n-1; i++) {
        printf("Enter the element number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter a number :");
    scanf("%d", &x);
    int count = 0;
    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if(x < arr[i]) {
            count ++;
        }
    }
    printf("Number of elements greather than %d is %d", x, count);
    return 0;
}