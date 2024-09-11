#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[] = {1,2,2,5,1,4,6};
    int len = sizeof(arr)/sizeof(arr[1]), n = 0, lenc = 1;
    int *arrc = calloc(1,sizeof(int));
    *(arrc) = arr[0];
    for (int i = 1; i<len; i++){
        n = 0;
        for (int j = i-1; j>=0; j--){
            if (arr[i]==arr[j]){
                n++;
                break;
            }
        }
        if (n == 0){
            //append
            lenc++;
            arrc = realloc(arrc,lenc*sizeof(int));
            *(arrc + lenc-1) = arr[i];
        }
    }
    // int lenc = sizeof(arrc)/sizeof(arrc[1]);
    for (int i=0; i<lenc; i++){
        printf("%d ", *(arrc+i));
    }
    printf("\n");
}