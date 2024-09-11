#include <stdio.h>

int main(){
    int arr[] = {1,2,2,5,1,4,6};
    int len = sizeof(arr)/sizeof(arr[0]), n = 0;
    for (int i = 0; i<len; i++){
        for (int j = i+1; j<len; j++){
            if (arr[i]==arr[j]){
                n++; 
                break;
            }
        }
    }
    printf("%d",n);
}