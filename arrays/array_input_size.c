#include<stdio.h>
int main() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i <= n-1; i++) {
        printf("\nEnter the element number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}