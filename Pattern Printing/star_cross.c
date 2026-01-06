#include<stdio.h>
int main() {
    int n;
    printf("Enter a number (odd number) : ");
    scanf("%d", &n);
    if(n % 2 != 0) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if( i + j == n + 1 || i == j) {
                    printf("*");
                }
                else printf(" ");
            }
            printf("\n");
        }
        
    }
    else printf("Enter a odd number!");
    
    // Pause before exiting
    printf("\n\nPress Enter key to exit...");
    getchar();  // Consume the newline character from scanf
    getchar();  // Wait for another Enter key press
    return 0;
}