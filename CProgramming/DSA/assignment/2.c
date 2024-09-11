#include <stdio.h>
#include <stdlib.h>

int *StackA[10] = {1,2,3,4,5};
int topA = 4;
int sizeA = 10;
int *StackB[10] = {4,3,2,9,4,6,3};
int topB = 7;
int sizeB = 10;

void merge(){
    for (int i = 0; i<topB; i++){
        Push(StackA,Pop(StackB),topA,sizeA)
    }
}

void Push(int array[], int val, int top, int size){
    if (++top == size){
        array = realloc(array,(size+1)*sizeof(int));
        *(array+size) = val;
        size++;
        return;
    }
    array[top] = val;
}

int Pop(int array[], int top){
    if (top == -1){
        printf("UnderFlow")
        return -1;
    }
    int x = array[top];
    top--;
    return x;
}

void printarr(int ls[], int size){
    for (int i=0; i<size; i++){
        printf("%d ", ls[i]);
    }
}

