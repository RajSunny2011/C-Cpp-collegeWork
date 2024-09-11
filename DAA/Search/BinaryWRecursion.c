#include <stdio.h>

int BinSearch(int arr[],int low,int high,int i){
    if(low>high){
        return -1;
    }
    int mid = (low + high)/2;
    if (arr[mid]==i){
        return mid;
    }
    else if(i<arr[mid]){
        return BinSearch(arr, low, mid-1, i);
    }
    else{
        return BinSearch(arr, mid+1, high, i);
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    printf("%d",BinSearch(arr,0,5,4));
    return 0;
}