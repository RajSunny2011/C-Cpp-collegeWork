#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    printf("Enter two numbers(a b): ");
    scanf("%d %d",&a,&b);
    int c = abs(a),n=0;
    int e = c;
    if(a<0 ^ b<0){
        n = 1;
    }
    for (int i = 1; i<abs(b); i++){
        c = c + e;
    }
    if (n){
        c = -c;
    }
    printf("%d",c);
    return 0;
}
