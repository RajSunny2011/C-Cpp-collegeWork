#include <stdio.h>
#include <math.h>

int revint(int i){
    int C = i,B = 0;
    int p = floor(log10(i) + 1);
    while (C>0){
        B = B + pow((C%10), p);
        C = floor(C/10);
    }
    return B;
}

void armstrong(int i){
    int B = revint(i);
    if(i == B){
        printf("Number is a Armstrong number.");
    }else{
        printf("Number is not an Armstrong number.");
    }
    printf("\n");
}

int gcd(int n, int m){
    while(n != m){
        if(n > m)
            n -= m;
        else
            m -= n;
    }
    return n;
}

void coprime(int i){
    int B = revint(i);
    int g = gcd(i, B);
    if(g == 1){
        printf("Number and its reverse are co-primes.");
    }else{
        printf("Number and its reverse are not co-primes.");
    }
    printf("\n");
}

int Fact(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    int k = n*Fact(n-1);
    return k;
}

int main(){
    int n;
    printf("Enter the number to check for armstrong number: ");
    scanf("%d", &n);
    armstrong(n);

    printf("Enter the number to check if reverse of it, is its coprime: ");
    scanf("%d", &n);
    coprime(n);

    printf("Enter the number to get its factorial: ");
    scanf("%d", &n);
    int f = Fact(n);
    printf("%d", f);

    printf("\n");
    return 0;
}
