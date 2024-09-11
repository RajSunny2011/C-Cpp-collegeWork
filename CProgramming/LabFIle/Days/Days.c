#include <stdio.h>
#include <math.h>

void main(){
    int days,years,months,ldays,temp;
    scanf("%d",&days);
    years = floor(days/365);
    months = floor((days-(years*365))/30);
    ldays = days-(months*30+years*365);
    printf("%d Years %d Months %d Days",years,months,ldays);
}
