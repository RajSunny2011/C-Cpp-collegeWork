#include <stdio.h>
#include <stdlib.h>

void printarr(int ls[], int size){
    for (int i=0; i<size; i++){
        printf("%d ", ls[i]);
    }
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
    for (int i=p; i<size; i++){
        *(l+i)=*(l+(i+1));
    }
    l = realloc(l,(size-1)*sizeof(int));
    size--;
    printarr(l,size);
    printf("\n");

    printf("Enter the index to add the element to: ");
    scanf("%d",&p);
    printf("Enter the element to be added: ");
    scanf("%d",&a);
    l = realloc(l,(size+1)*sizeof(int));
    for (int i=size; i>p; i--){
        *(l+i)=*(l+(i-1));
    }
    *(l+p) = a;
    size++;
    printarr(l,size);
    printf("\n");
}
