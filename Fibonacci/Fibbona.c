#include <stdio.h>
int fibonacci(int n){
    if (n == 0){
        return 0;
    } 
    if (n == 1){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
    int a;
    scanf("%d",&a);
    for (int i = 0; i < a; i++){
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
