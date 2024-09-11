#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr, l, n;
    printf("Enter size: ");
    scanf("%d", &l);
    ptr = (int*)calloc(l,sizeof(int));

    printf("Previous Addresses: ");
    for (int i = 0; i<l; i++){
        printf("%x ",ptr+i);
    }
    printf("\n");

    printf("Enter size: ");
    scanf("%d", &n);   
    ptr = realloc(ptr, l*sizeof(int));

    printf("New Addresses: ");
    for (int i = 0; i<n; i++){
        printf("%x ",ptr+i);
    }
    printf("\n");
    free(ptr);
}