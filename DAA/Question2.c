// to subtract 2 matrix
#include <stdio.h>
int main(){
    int m1[2][2] = {{2,2},{2,2}};
    int m2[2][2] = {{1,1},{1,1}};
    int m3[2][2];
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            m3[i][j] = m1[i][j] - m2[i][j];
        }
    }
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
}