#include <stdio.h>
#include <math.h>

int main(){
    int i = 1,C = 1;
    while(C>0){
        printf("%d", C);
        C = floor(C/10);
    }
    printf("End");
    return 0;
}