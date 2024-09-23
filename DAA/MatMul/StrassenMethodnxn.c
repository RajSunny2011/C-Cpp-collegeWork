#include <stdio.h>
#include <stdlib.h>

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

void addMat(int **A, int **B, int **C, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subMat(int **A, int **B, int **C, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void matMul(int **A, int **B, int **C, int size){
    if (size == 1) {
        C[0][0] = A[0][0] * B[0][0];
        return;
    }

    int newSize = size / 2;
    int **A11 = createMat(newSize);
    int **A12 = createMat(newSize);
    int **A21 = createMat(newSize);
    int **A22 = createMat(newSize);

    int **B11 = createMat(newSize);
    int **B12 = createMat(newSize);
    int **B21 = createMat(newSize);
    int **B22 = createMat(newSize);

    int **M1 = createMat(newSize);
    int **M2 = createMat(newSize);
    int **M3 = createMat(newSize);
    int **M4 = createMat(newSize);
    int **M5 = createMat(newSize);
    int **M6 = createMat(newSize);
    int **M7 = createMat(newSize);

    int **temp1 = createMat(newSize);
    int **temp2 = createMat(newSize);

    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + newSize];
            A21[i][j] = A[i + newSize][j];
            A22[i][j] = A[i + newSize][j + newSize];

            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + newSize];
            B21[i][j] = B[i + newSize][j];
            B22[i][j] = B[i + newSize][j + newSize];
        }
    }

    addMat(A11, A22, temp1, newSize);
    addMat(B11, B22, temp2, newSize);
    matMul(temp1, temp2, M1, newSize);

    addMat(A21, A22, temp1, newSize);
    matMul(temp1, B11, M2, newSize);

    subMat(B12, B22, temp1, newSize);
    matMul(A11, temp1, M3, newSize);

    subMat(B21, B11, temp1, newSize);
    matMul(A22, temp1, M4, newSize);

    addMat(A11, A12, temp1, newSize);
    matMul(temp1, B22, M5, newSize);

    subMat(A21, A11, temp1, newSize);
    addMat(B11, B12, temp2, newSize);
    matMul(temp1, temp2, M6, newSize);

    subMat(A12, A22, temp1, newSize);
    addMat(B21, B22, temp2, newSize);
    matMul(temp1, temp2, M7, newSize);

    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            C[i][j] = M1[i][j] + M4[i][j] - M5[i][j] + M7[i][j];
            C[i][j + newSize] = M3[i][j] + M5[i][j];
            C[i + newSize][j] = M2[i][j] + M4[i][j];
            C[i + newSize][j + newSize] = M1[i][j] - M2[i][j] + M3[i][j] + M6[i][j];
        }
    }

    freeMat(A11, newSize);
    freeMat(A12, newSize);
    freeMat(A21, newSize);
    freeMat(A22, newSize);
    freeMat(B11, newSize);
    freeMat(B12, newSize);
    freeMat(B21, newSize);
    freeMat(B22, newSize);
    freeMat(M1, newSize);
    freeMat(M2, newSize);
    freeMat(M3, newSize);
    freeMat(M4, newSize);
    freeMat(M5, newSize);
    freeMat(M6, newSize);
    freeMat(M7, newSize);
    freeMat(temp1, newSize);
    freeMat(temp2, newSize);

}

void printMatrix(int **matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter matrix size (must be a power of 2): ");
    scanf("%d", &size);

    int **A = createMat(size), **B = createMat(size), **C = createMat(size);

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    matMul(A, B, C, size);

    printf("Resulting matrix C is:\n");
    printMatrix(C, size);

    freeMat(A, size);
    freeMat(B, size);
    freeMat(C, size);

    return 0;
}
