// to subtract 2 matrix
#include <stdio.h>

void subtract(int mat1[][2], int mat2[][2], int mat3[][2]){
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            mat3[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

int main(){
    int m1[2][2] = {{2,2},{2,2}};
    int m2[2][2] = {{1,1},{2,1}};
    int m3[2][2];
    subtract(m1,m2,m3);
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
}