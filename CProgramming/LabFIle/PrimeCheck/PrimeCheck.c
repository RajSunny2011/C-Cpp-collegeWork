#include <stdio.h>
#include <math.h>

void main(){
    int x;
    int prime = 1;

    scanf("%d",&x);
    
    if (x != 2){
        int c;
        c = floor(sqrt(x)) + 1;
        for (int i = 2; i < c; i++){
            if (x % i == 0){
                printf("Number is not a Prime");
                prime = 0;
                break;
            }
        }
    }
    
    if (prime || x == 2){
        printf("Number is a Prime\n");
    }
}