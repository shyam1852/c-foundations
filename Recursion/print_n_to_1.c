#include<stdio.h>
void decreasing(int n);
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    decreasing(n);
    return 0;
}
void decreasing(int n) {
    if(n == 0) return;
    printf("%d\n", n);  // Print BEFORE recursive call
    
    decreasing(n-1);    // Recursive call AFTER print
    return;
}