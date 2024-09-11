// 5.Find the product of two matrices using pointers.
#include <stdio.h>
int main(){
    int rows1,cols1,rows2,cols2,n;
    printf("Enter the size of the array 1 (rows columns): ");
    scanf("%d %d", &rows1, &cols1);
    int mat1[rows1][cols1];
    for (int i = 0; i<rows1; i++){
        printf("Enter numbers in Row %d: ",i+1);
        for (int j = 0; j<cols1; j++){
        scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the size of the array 2 (rows columns): ");
    scanf("%d %d", &rows2, &cols2);
    int mat2[rows2][cols2];
    for (int i = 0; i<rows2; i++){
        printf("Enter numbers in Row %d: ",i+1);
        for (int j = 0; j<cols2; j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    if (cols1 != rows2){
        printf("Cannot multiply!");
        return 0;
    }
    int mat3[rows1][cols2];
    for (int i = 0; i<rows1; i++){
        for (int j = 0; j<cols2; j++){
            mat3[i][j] = 0;
            for (int k = 0; k < cols1; ++k){
                *(*(mat3 + i) + j) += (*(*(mat1 + i) + k)) * (*(*(mat2 + k) + j));
            }
        }
    }
    for (int i = 0; i<rows1; i++){
        for (int j = 0; j<cols2; j++){
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
