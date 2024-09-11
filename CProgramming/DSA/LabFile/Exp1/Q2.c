// 2.Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position of ‘a1’ and also delete an element from jth position of ‘a1’.

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

    int p,a;
    printf("Enter the index to remove the element from: ");
    scanf("%d",&p);
    a1 = removearr(a1,p,n);
    n--;
    printarr(a1,n);
    printf("\n");

    printf("Enter the index to add the element to: ");
    scanf("%d",&p);
    printf("Enter the element to be added: ");
    scanf("%d",&a);
    a1 = addarr(a1,p,a,n);
    n++;
    printarr(a1,n);
    free(a1);
    printf("\n");
}
