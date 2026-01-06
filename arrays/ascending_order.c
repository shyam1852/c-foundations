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
    int temp;
    for(int i = 0; i <= n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nNumbers in the ascending order is as follows :\n");
    for(int i = 0; i <= n-1; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}