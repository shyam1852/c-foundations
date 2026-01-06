#include<stdio.h>
void towerOfHanoi(int n, char src, char helper, char dest);         // src = source, helper, dest = destination;
int main() {
    int n;
    printf("Enetr number of disc : ");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
void towerOfHanoi(int n, char src, char helper, char dest) {
    if(n == 0) return;
    towerOfHanoi(n-1, src, dest, helper);
    printf("Transfer disk %d from %c to %c\n", n, src, dest);
    towerOfHanoi(n-1, helper, src, dest);
    return;
}