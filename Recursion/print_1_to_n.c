#include<stdio.h>
void increasing(int n);  // Changed to void - we don't need return value

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    increasing(n);
    return 0;
}

void increasing(int n) {
    if(n == 0) return;
    increasing(n - 1);  // Recursive call FIRST
    printf("%d\n", n);  // Print AFTER recursive call
    
}