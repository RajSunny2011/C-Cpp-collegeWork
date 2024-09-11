#include <stdio.h>

int sum(int* Array, int size){
    int s = 0;
    for (int i=0; i<size; i++){
        s = s + *(Array+i);
    }
    return s;
}

int main(){
    int size, s;
    printf("Number of Elements: ");
    scanf("%d", &size);
    int ls[size];
    printf("Enter: ");
    for (int i=0; i<size; i++){
        scanf("%d", &ls[i]);
    }
    s = sum(ls, size);
    printf("%d", s);
    printf("\n");
}