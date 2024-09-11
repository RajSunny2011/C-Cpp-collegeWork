#include <stdio.h>
int main(){
    int arr[] = {12, 12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, k, j;
    for (i = 1; i < n; i++){
        k = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > k){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
    
    for (int i = 0; i<n; i++){
        int c = 1;
        while (arr[i]==arr[i+1]){
            c++;
            i++;
        }
        printf("%d: %d\n", arr[i], c);
    }
    return 0;
}