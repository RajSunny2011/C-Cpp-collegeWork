#include <stdio.h>

void main(){
    int x;
    printf("Enter A Number: ");
    scanf("%d", &x);
    if (x % 2==0){
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }
}