// Number of ways, so that the person reaches nth stair.    single, double, triple  steps allowed

#include<stdio.h>
int stair(int n);
int main() {
    int n;
    printf("ENter the nth number of stairs : ");
    scanf("%d", &n);
    int ways = stair(n);
    printf("Total number of ways to climb the stairs is %d", ways);
    return 0;
}
int stair(int n) {
    if(n < 0) return 0;        // No ways for negative stairs
    if(n == 0) return 1;       // One way to stay at ground (base case)    
        //If you’re already standing on the 0th stair, there’s exactly one way to “reach” it — by doing nothing. No movement, no steps — that’s still a valid way.
    if(n == 1) return 1;       // One way: (1)
    if(n == 2) return 2;       // Two ways: (1,1) or (2)
    if(n == 3) return 4;       // Four ways: (1,1,1), (1,2), (2,1), (3)
    
    int totalWays = stair(n-1) + stair(n-2) + stair(n-3);
    return totalWays;
}