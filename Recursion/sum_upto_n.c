    //    WITH RETURN -->

// #include<stdio.h>
// int sum(int n);
// int main() {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     int result = sum(n);
//     printf("%d", result);
//     return 0;
// }
// int sum(int n) {
//     if(n == 0) return 0;
//     return n + sum(n - 1);
// }

    // WITH PARAMETERISED -->
    
    #include<stdio.h>
    void sum(int n, int s);
    int main() {
        int n;
        printf("Enter a number : ");
        scanf("%d", &n);
        sum(n , 0);
        return 0;
    }
    void sum(int n, int s) {
        if(n == 0) {
            printf("%d", s);
            return;
        }
        sum((n-1), (n + s));
        return;
    }