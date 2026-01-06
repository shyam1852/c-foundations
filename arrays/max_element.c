#include<stdio.h>
//include<limits.h> // -> lowest/ max number header file
int main() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the element number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    //int max = INT_MIN; // -> lowest number 
    for(int i = 1; i < n; i++) {
        if(max < arr[i]) 
            max = arr[i];
    }
    printf("Largest number among the given numbers is %d\n", max);
    return 0;
}