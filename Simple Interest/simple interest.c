#include <stdio.h>
#include <stdlib.h>

int main(){

    int principal,time;
    float rate, interest;

    printf("Enter the principal amount:");
    scanf("%d", &principal);
    printf("Enter the rate of interest (in decimal):");
    scanf("%f", &rate);
    printf("Enter the No of years:");
    scanf("%d", &time);

    interest = principal*time*rate;

    printf("%.2f\n", interest);

    system("pause");
    return 0;
}