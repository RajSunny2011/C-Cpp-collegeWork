#include <stdio.h>

void printarr(int ls[], int size){
    for (int i=0; i<size; i++){
        printf("%d ", ls[i]);
    }
}

int main(){
    int size;
    printf("Number of Elements: ");
    scanf("%d", &size);
    int ls[size];
    printf("Enter: ");
    for (int i=0; i<size; i++){
        scanf("%d", &ls[i]);
    }
    printarr(ls,size);
    printf("\n");
}