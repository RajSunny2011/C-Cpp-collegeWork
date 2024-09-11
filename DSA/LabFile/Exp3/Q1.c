// 1. Using array and functions implement Stack and its operations like insert, delete, and display
#include <stdio.h>
#include <stdlib.h>

void printarr(int ls[], int top){
    for (int i=top-1; i>=0; i--){
        printf("%d ", ls[i]);
    }
    printf("\n");
}

int pop(int array[], int top){
    if (top<0){
        printf("Underflow");
        ret0urn 0;
    }
    int x = *(array+top-1);
    *(array+top-1)=0;
    array = realloc(array,(top-1)*sizeof(int));
    return(x);
}

int* insert(int array[],int val, int top){
    array = realloc(array,(top+1)*sizeof(int));
    *(array+(top)) = val;
    return(array);
}

int main(){
    int top=-1;
    int *ls = calloc(1,sizeof(int));
    printarr(ls,top);
    int x = pop(ls,top);
    top--;
    printarr(ls,top);
    ls = insert(ls,4,top);
    top++;
    printarr(ls,top);
    printf("\n");
}
