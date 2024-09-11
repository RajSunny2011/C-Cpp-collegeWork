#include <stdio.h>

void swap(int *var1, int *var2){
    int tmp = *var1;
    *var1 = *var2;
    *var2 = tmp;
}

int pivotindexfunc(int array[], int low, int high){
    int i = low-1;
    int pivot = *(array+high);

    for (int j = low; j<high; j++ ){
        if (*(array+j)<=pivot){
            swap((array+i),(array+j));
            i++;
        }
    }
    swap((array+i),(array+high));
    return (i);
}

void quicksort(int array[],int low,int high){
    if (low<high){
        int pivotindex = pivotindexfunc(array, low, high);
        quicksort(array, low, pivotindex);
        quicksort(array, pivotindex+1, high);
    }
}

void printarr(int ls[], int size){
    for (int i=0; i<size; i++){
        printf("%d ", ls[i]);
    }
}

int main(){
    int list[] = {3, 9, 2, 1};
    int len = sizeof(list)/sizeof(list[0]);
    printf("%d",len);
    quicksort(list,0,len-1);
    printarr(list,len);
    printf("\n");
    return 0;
}
