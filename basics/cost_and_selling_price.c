#include<stdio.h>
int main() {
    int selling, cost, profit, loss;
    printf("Enter the selling price : ");
    scanf("%d", &selling);
    printf("Enter the cost price : ");
    scanf("%d", &cost);
    if(selling > cost) {
        profit = selling - cost;
        printf("Profit of Rs %d", profit);
    }
    else if(selling == cost) {
        printf("No profit or no loss");
    }
    else {
        loss = cost - selling;
        printf("Loss of Rs %d", loss);
    }
    return 0;
}