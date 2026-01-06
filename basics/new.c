// Print armstrong number from 1 to 500
#include<stdio.h>
#include<math.h>
int main() {
    printf("Armstrong numbers from 1-500 are : 1 ");
    
    for(int i = 1; i <= 500; i++) {
        // Count the number of digits
        int count = 0;
        int temp = i;
        while(temp > 0) {
            temp = temp / 10;
            count++;
        }
        
        // Calculate sum of each digit raised to power of count
        int n = i;
        int sum = 0;
        
        while(n > 0) {
            int last_digit = n % 10;
            sum += round(pow(last_digit, count));
            n = n / 10;
        }
        
        // Check if it's an Armstrong number
        if(sum == i && count > 1) {
            printf("%d ", i);
        }
    }
    return 0;
}