#include <stdio.h>

void main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a>b){
        if (a>c){
            printf("largest number is: %d", a);
        }
        else{
            printf("largest number is: %d", c);
        }
    }
    else if (b>c){
        printf("largest number is: %d", b);
    }
    else{
        printf("largest number is: %d", c);
    }
}