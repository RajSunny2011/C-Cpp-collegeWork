#include <stdio.h>

int Fact(int n){
    if(n==0){
        return 1;
    }
    return n*Fact(n-1);
}

int main(){
    int a;
    printf("Enter a positive integer: ");
    scanf("%d",&a);
    if(n<0){
        
    }
    printf("%d\n",Fact(a));
    return 0;
}
