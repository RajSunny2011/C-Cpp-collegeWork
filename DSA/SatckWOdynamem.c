#include <stdio.h>
#include <stdlib.h>

#define MAX 50
int ls[MAX];
int top = -1;

void printarr(int top){
    for (int i=top; i>=0; i--){
        printf("%d ", ls[i]);
    }
    printf("\n");
}

int pop(){
    if (top == -1){
        printf("Underflow");
    }else{
        ls[top] = 0;
        top--;
        return ls[top++];
    }
}

void insert(int val){
    if (top == MAX){
        printf("Overflow");
    }else{
    top++;
    ls[top] = val;
    }
}

int main(){
    printarr(top);
    insert(14);
    insert(41);
    insert(42);
    printarr(top);
    pop();
    printarr(top);
    printf("\n");
}