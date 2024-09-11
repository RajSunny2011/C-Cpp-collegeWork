#include <stdio.h>
int sum(int n){
    if (n == 0){
        return 0;
    } 
    if (n == 1){
        return 1;
    }
    return n + sum(n - 1);
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d ", sum(a));
    printf("\n");
    return 0;
}
