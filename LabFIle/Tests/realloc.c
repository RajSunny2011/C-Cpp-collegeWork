#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int x = 20;
    ptr = malloc(sizeof(int));        // allocating memory using malloc
    ptr[0] = x;
    printf("Value of ptr before memory reallocation : %d\n", ptr[0]);
    ptr = realloc(ptr, 5 * sizeof(int));    // reallocating memory using realloc
    printf("Value of ptr after memory reallocation : %d", ptr[0]);
    
    return 0;
}