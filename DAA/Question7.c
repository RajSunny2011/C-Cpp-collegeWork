#include <stdio.h>

int sumMat(int mat[2][2]){
    int sum = 0;
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            sum += mat[i][j];
        }
    }
    return sum;
}

int main(){
    int mat1[2][2] = {
        {1,2},
        {3,4}
    };
    int mat2[2][2] = {
        {3,3},
        {1,4}
    };
    if (sumMat(mat1) == sumMat(mat2)){
        printf("The sum are equal.");
    }else{
        printf("The sum are not equal.");
    }
}