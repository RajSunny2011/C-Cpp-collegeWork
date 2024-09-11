#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter the number to generate armstrong numbers to: ");
    scanf("%d",&n);
    for (int i=0; i<=n; i++){
        int C = i,B = 0;
        int p = floor(log10(i) + 1);
        while (C>0){
            B = B + pow((C%10), p);
            C = floor(C/10);
        }
        if(i == B){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
