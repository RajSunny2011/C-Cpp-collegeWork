#include <stdio.h>
#include <stdlib.h>

void printarr(int ls[], int size){
    for (int i=0; i<size; i++){
        printf("%d ", ls[i]);
    }
}

int* removearr(int array[],int index, int size){
    for (int i=index; i<size; i++){
        *(array+i)=*(array+(i+1));
    }
    array = realloc(array,(size-1)*sizeof(int));
    return(array);
}

int* addarr(int array[],int index,int val, int size){
    array = realloc(array,(size+1)*sizeof(int));
    for (int i=size; i>index; i--){
        *(array+i)=*(array+(i-1));
    }
    *(array+index) = val;
    return(array);
}

int main(){
    int size;
    printf("Number of Elements: ");
    scanf("%d", &size);
    int *l = (int*)calloc(size,sizeof(int));
    printf("Enter: ");
    for (int i=0; i<size; i++){
        scanf("%d", l+i);
    }
    printarr(l,size);
    printf("\n");

    int p,a;
    printf("Enter the index to remove the element from: ");
    scanf("%d",&p);
    l = removearr(l,p,size);
    size--;
    printarr(l,size);
    printf("\n");

    printf("Enter the index to add the element to: ");
    scanf("%d",&p);
    printf("Enter the element to be added: ");
    scanf("%d",&a);
    l = addarr(l,p,a,size);
    size++;
    printarr(l,size);
    free(l);
    printf("\n");
}
