#include <stdio.h>
#include <math.h>

int main(){
    int num, numa, revnum = 0, deg;
    printf("Enter a number: ");
    scanf("%d", &num);
    numa = num;
    while(numa>0){
        deg = floor(log10(numa));
        revnum = revnum + (numa%10*pow(10,deg));
        numa = floor(numa/10);
    }
    if (revnum==num){
        printf("Number is a palindrome.");
    }
    else{
        printf("Number is not a palindrome.");
    }
    return 0;
}
