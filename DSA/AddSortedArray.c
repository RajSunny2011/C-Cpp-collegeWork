#include <stdio.h>
#include <stdlib.h>

void printarr(int ls[], int size){
    for (int i=0; i<size; i++){
        printf("%d ", ls[i]);
    }
}

int main(){
    int *L = calloc(4,sizeof(int));
    int size = 4;
    for (int i = 0; i<size; i++){
        *(L+i) = i+1;
    }
    L = realloc(L,(size+1)*sizeof(int));
    size++;
    int x, f = 0;
    printf("Enter a number: ");
    scanf("%d",&x);
    for (int i = 0; i<size-1; i++){
        if ((x>=L[i])&&(x<=L[i+1])){
            f = 1;
            for (int j=size; j>i+1; j--){
                L[j]=L[j-1];
            }
            L[i+1] = x;
        break;
        }
    }
    if (f==0){
        L[size-1] = x;
    }
    printarr(L,size);
    return 0;
}