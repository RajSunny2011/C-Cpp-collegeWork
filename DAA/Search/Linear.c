#include <stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int s = 6;
    int f = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i<size; i++){
        if (arr[i]==s){
            printf("Number %d is present at index: %d",s,i);
            f = 1;
            break;
        }
    }
    if (f==0){
        printf("Number %d is not present in the array",s);
    }
    return 0;
}