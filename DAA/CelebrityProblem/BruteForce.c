#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int **createMat(int size){
    int **mat = (int**)malloc(size * sizeof(int*));
    for (int i = 0; i < size; i++) {
        mat[i] = (int*)malloc(size * sizeof(int));
    }
    return mat;
}

void freeMat(int **matrix, int size) {
    for (int i = 0; i < size; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int findCelebrity(int** Mat, int n){
    int celebrtiy = -1;
    for (int i = 0; i<n; i++){
        bool knows_anyone = false;
        bool everyone_knows = true;
        for (int j = 0; j<n; j++){
            if (Mat[i][j]){
                knows_anyone = true;
                break;
            }
        }
        if (knows_anyone){
            continue;
        }
        for (int j = 0; j < n; j++){
            if(i!=j && !(Mat[j][i])){
                everyone_knows = false;
                break;
            }
        }
        if (!(everyone_knows)){
            continue;
        }
        if (!(knows_anyone) && everyone_knows){
            celebrtiy = i;
            break;
        }
    }
    return celebrtiy;
}

int main(){
    int size;
    printf("Enter matrix size: ");
    scanf("%d", &size);
    int **mat = createMat(size);
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("%d\n",findCelebrity(mat, size));
    free(mat);
    return 0;
}