#include <stdio.h>
#include <math.h>

int prime(int num){
    int prime = 1;
    if (num != 2){
        float c;
        c = floor(sqrt(num)) + 1;
        for (int i = 2; i < c; i++){
            if (num % i == 0){
                prime = 0;
                break;
            }
        }
    }
    return prime;
}

int main(){
    int inp;
    printf("Number to generate prime numbers till: ");
    scanf("%d", &inp);
    for (int i = 2;i<=inp;i++){
        if(prime(i)){
            printf("%d ", i);
        }
    }
}