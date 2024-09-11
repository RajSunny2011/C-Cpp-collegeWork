// 1.	Using array and functions implement Queue data structure and its operations like insert, delete, and display.
#include <stdio.h>
#include <stdlib.h>

void printarr(int ls[], int size){
    for (int i=0; i<size; i++){
        printf("%d ", ls[i]);
    }
}

int* removearr(int array[], int size){
    for (int i=0; i<size; i++){
        *(array+i)=*(array+(i+1));
    }
    array = realloc(array,(size-1)*sizeof(int));
    return(array);
}

int* addarr(int array[],int val, int size){
    array = realloc(array,(size+1)*sizeof(int));
    *(array+size) = val;
    return(array);
}

int main(){
    int n;
    printf("Number of Elements: ");
    scanf("%d", &n);
    int *a1 = (int*)calloc(n,sizeof(int));
    printf("Enter: ");
    for (int i=0; i<n; i++){
        scanf("%d", a1+i);
    }
    printarr(a1,n);
    printf("\n");

    a1 = removearr(a1,n);
    n--;
    printarr(a1,n);
    printf("\n");

    int a;
    printf("Enter the element to be added: ");
    scanf("%d",&a);
    a1 = addarr(a1,a,n);
    n++;
    printarr(a1,n);
    free(a1);
    printf("\n");
}
