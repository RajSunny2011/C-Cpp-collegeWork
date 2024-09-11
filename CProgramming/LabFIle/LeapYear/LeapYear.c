#include <stdio.h>

void main(){
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        printf("year is a leap year");
    }
    else{
        printf("year is not a leap year");
    }
}