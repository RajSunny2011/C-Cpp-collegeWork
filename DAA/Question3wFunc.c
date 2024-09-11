// difference of sum of upper diagnal and lower diagnal
#include <stdio.h>

int diff(int mat[][3]){
    int upper = 0;
    for(int i = 0; i<2; i++){
        for(int j = 2; j>i; j--){
            upper += mat[i][j];
        };
    };
    int lower = 0;
    for(int i = 2; i>0; i--){
        for(int j = 0; j<i; j++){
            lower += mat[i][j];
        };
    };
    return (lower - upper);
}

int main(){
    int mat[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int d = diff(mat);
    printf("%d", d);
}