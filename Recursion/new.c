#include<stdio.h>
void pass(char x, char b);
int main() {
    char x = 'A';
    pass(x, 'B');
    return 0;
}
void pass(char x, char b) {
    printf("%c -> %c", b, x);
    return;
}