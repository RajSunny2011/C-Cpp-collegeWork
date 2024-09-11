#include <stdio.h>
#define rows 3
#define columns 3

int main(){
    int mat[rows][columns] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int tranMat[rows][columns];
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            tranMat[j][i] = mat[i][j];
        }
    }
    for (int i = 0; i<rows; i++){
        for (int j = 0; j<columns; j++){
            printf("%d ", tranMat[i][j]);
        }
        printf("\n");
    }
    return 0;
}