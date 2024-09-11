#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    double i, s = 0.0;
    for (i = 1; i <= n; i++){
        s = s + 1/i;
    }
    printf("Sum is %f\n", s);
    return 0;
}