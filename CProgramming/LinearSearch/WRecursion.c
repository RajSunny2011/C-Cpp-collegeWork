#include <stdio.h>
int i = 0;
int search(int arr[], int s, int size){
    if(i>=size){
        printf("Number %d is not present in the array",s);
        return 0+;
    }
    else if(arr[i]==s){
        printf("Number %d is present at index: %d",s,i);
        return 0;
    }
    else{i++;};
    search(arr,s,size);
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int s = 6;
    int size = sizeof(arr)/sizeof(arr[0]);
    search(arr,s,size);
    return 0;
}