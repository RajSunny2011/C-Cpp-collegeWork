#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr, l, n;
    printf("Enter size: ");
    scanf("%d", &l);
    ptr = (int*)malloc(l*sizeof(int));
    printf("Addresses: ");
    for (int i = 0; i<l; i++){
        printf("%x ",ptr+i);
    }
}
