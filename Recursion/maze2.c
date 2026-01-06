/*Only right and down moves are allowed at 
        a time through 2 parameters */

#include <stdio.h>
int maze2(int r, int c);
int main() {
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Number of ways to reach final destination = %d\n", maze2(r, c));
    return 0;
}
int maze2(int r, int c) {
    if (r == 1 || c == 1) 
        return 1; // Only one path along edges
    return maze2(r - 1, c) + maze2(r, c - 1);
}




// #include<stdio.h>
// int maze2(int r, int c);
// int main() {
//     int r, c;
//     printf("Enter number of rows : ");
//     scanf("%d", &r);
//     printf("Enter number of columns : ");
//     scanf("%d", &c);
//     int noOfWays = maze2(r, c);
//     printf("Number of ways to reach final destiation = %d", noOfWays);
//     return 0;
// }
// int maze2(int r, int c) {
//     int rightWays = 0;
//     int downWays = 0;
//     if(r == 1 && c == 1) return 1;
//     if(r == 1) {
//         rightWays += maze2(r, c - 1);
//     }
//     if(c == 1) {
//         downWays += maze2(r-1, c);
//     }
//     if(r > 1 && c > 1) {
//         rightWays += maze2(r, c-1);
//         downWays += maze2(r-1, c);
//     }
//     int totalWays = rightWays + downWays;
//     return totalWays;
// }