/*If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three, using nested loops*/
#include<stdio.h>
int main() {
    int ram, shyam, ajay;
    printf("Enter the age of Ram : ");
    scanf("%d", &ram);
    printf("Enter the age of Shyam : ");
    scanf("%d", &shyam);
    printf("Enter the age of Ajay : ");
    scanf("%d", &ajay);
    if(ram < shyam) {
        if(ram < ajay) {
            printf("Ram is youngest");
        }
        else {
            printf("Ajay is youngest");
        }
    }
    else {      //shyam < ajay
        if(shyam < ajay) {
            printf("Shyam is youngest");
        }
        else {
            printf("Ajay is youngest");
        }
    }
    return 0;
}