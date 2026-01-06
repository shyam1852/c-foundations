/* Ques : Take input percentage of a student and print the Grade according to marks:
1)90-100 Excellent      A+
2)80-90 Very Good       A  
3)70-80 Good            B+ 
4)60-70 Can do better   B
5)50-60 Average         C  
6)40-50 Below Average   D
7)<40 Fail              E
*/
#include<stdio.h>
int main() {
    float P, C, M, E, Phy_Edu, average;
    printf("Enter the marks obtained in Physics : ");
    scanf("%f", &P);
    printf("Enter the marks obtained in Chemistry : ");
    scanf("%f", &C);
    printf("Enter the marks obtained in Mathematics : ");
    scanf("%f", &M);
    printf("Enter the marks obtained in English : ");
    scanf("%f", &E);
    printf("Enter the marks obtained in Physical Education : ");
    scanf("%f", &Phy_Edu);
    average = (P + C + M + E + Phy_Edu)/5;
    if(average >=0 && average <= 100) {
        printf("Average is : %.2f\n", average);    
    }
    if(average > 90 && average <= 100) {
        printf("Excellent");
    }
    else if(average > 80 && average <= 90) {
        printf("Very Good");
    }
    else if(average > 70 && average <= 80) {
        printf("Good");
    }
    else if(average > 60 && average <= 70) {
        printf("Can do better");
    }
    else if(average > 50 && average <= 60) {
        printf("Average");
    }
    else if(average > 40 && average <= 50) {
        printf("Below Average");
    }
    else if(average < 40 && average >= 0) {
        printf("Fail");
    }
    else {
        printf("Invalid Marks Entered");
    }
    return 0;
}