#include<stdio.h>
int main() {
    for(int i = 100; i >= 1; i = i - 3) {
        if(i < 1) {
            break;
        }
        printf("%d, ", i);
    }
    return 0;
}