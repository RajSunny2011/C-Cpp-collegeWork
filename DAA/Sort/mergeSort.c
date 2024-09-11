#include <stdio.h>

void merge(int arr[], int L, int M, int R){
    int s1 = M-L+1;
    int s2 = R-M;

    int arr1[s1], arr2[s2];
    int i;
    for(i = 0; i<s1; i++){
        arr1[i] = arr[L+i];
    }
    for(i = 0; i<s2; i++){
        arr2[i] = arr[i+M+1];
    }
    i = 0;
    int j = 0;
    int k = L;
    while (i < s1 && j < s2) {
        if (arr1[i] <= arr2[j]) {
            arr[k] = arr1[i];
            i++;
        }
        else {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < s1) {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < s2) {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int L, int R){
    if (L<R){
        int M = L+(R-L)/2;
        mergeSort(arr, L, M);
        mergeSort(arr, M+1, R);

        merge(arr, L, M, R);
    }
    
}

void printarr(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int size;
    printf("Number of Elements: ");
    scanf("%d", &size);
    int Arr[size];
    printf("Enter: ");
    for (int i=0; i<size; i++){
        scanf("%d", &Arr[i]);
    }
    int L = 0, R = size - 1;
    mergeSort(Arr, L, R);
    printarr(Arr, size);
    return 0;
}

