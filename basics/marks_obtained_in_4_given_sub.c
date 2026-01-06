#include<stdio.h>
int main() {
    float science = 30;
    float maths = 32;
    float SST = 28;
    float english = 33;
    float total = (science + maths + SST + english)*100/160;
    printf("Total Percentage is : %f",total);
    return 0;
}