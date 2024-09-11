#include <stdio.h>
int main(){
    int arr[] = {4,1,20,42,67,32,67,0};
    int size = sizeof(arr)/sizeof(arr[0]),j;
    for (int i = 1;i < size;i++){
        int key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("\n");
}