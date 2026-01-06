#include<stdio.h>
int main() {
    int arr[6] = {1,2,5,3,8,9};
    int mult = 1;
    for(int i = 0; i <= 5; i++) {
        mult = mult * arr[i];
    }
    printf("Multiplication = %d", mult);
    return 0;
}