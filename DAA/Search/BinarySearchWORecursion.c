#include <stdio.h>

int main(){
    int arr[]={10,20,30,32,40,45};
    int s = 3;
    int low = 0, high = sizeof(arr)/sizeof(arr[0]), mid, f = 0;
    while (low<high){
        mid = (low+high)/2;
        if (arr[mid]==s){
            f = 1;
            break;
        }
        else if (arr[mid]>s){
            high = mid-1;
        }
        else{low = mid+1;}
    }
    if (f==1){
        printf("Number %d is present at index: %d",s,mid);
    }
}