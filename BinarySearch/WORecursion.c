#include <stdio.h>

int main(){
    int arr[]={10,20,30,32,40,45};
    int s = 3;
    int l = 0, r = sizeof(arr)/sizeof(arr[0]), m, f = 0;
    while (1){
        m = (l+r)/2;
        if (r == l){
            break;
        }
        if (arr[m]==s){
            f = 1;
            break;
        }
        else if (arr[m]>s){
            r = m;
        }
        else{l = m;}
    }
    if (f==1){
        printf("Number %d is present at index: %d",s,m);
    }
}