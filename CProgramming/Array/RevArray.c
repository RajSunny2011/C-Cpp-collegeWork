#include <stdio.h>
#include <stdlib.h>

void swapint(int *var1, int *var2){
    int tmp = *var1;
    *var1 = *var2;
    *var2 = tmp;
}

int main(){
    int size;
    printf("Number of Elements: ");
    scanf("%d", &size);
    int *ptr = (int*)calloc(size,sizeof(int));
    printf("Enter %d numbers: ",size);
    for (int i = 0; i<size; i++){
        scanf("%d",ptr+i);
    }
    for (int i = 0; i<(size/2); i++){
        swapint(ptr + i, ptr + (size-1) - i);
    }
    for (int i = 0; i<size; i++){
        printf("%d ", *(ptr+i));
    }
    printf("\n");
}
