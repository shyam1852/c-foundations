#include<stdio.h>
int main() {
    // int arr[5] = {83,5,8,78,96};
    // printf("%d", arr[4]);

    int arr[5];
    for(int i = 0; i <= 4; i++) {
        printf("\nEnter the element number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for(int i = 0; i <= 4; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}