// Number of ways, so that the person reaches nth stair.    single, double steps allowed

#include<stdio.h>
int stair(int n);
int main() {
    int n;
    printf("Enter a nth number of stairs : ");
    scanf("%d", &n);
    int ways = stair(n);
    printf("Total number of ways to climb stairs is %d", ways);
    return 0;
}
int stair(int n) {
    if(n == 1 || n == 2) return n;
    int totalWays = stair(n-1) + stair(n-2);
    return totalWays;
}