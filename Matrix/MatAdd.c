#include <stdio.h>
int main(){
    int rows,cols,n;
    printf("Enter the size of the array(rows columns): ");
    scanf("%d %d", &rows, &cols);
    int mat1[rows][cols];
    for (int i = 0; i<rows; i++){
        for (int j = 0; j<cols; j++){
            printf("Enter number in row %d column %d: ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    int mat2[rows][cols];
    for (int i = 0; i<rows; i++){
        for (int j = 0; j<cols; j++){
            printf("Enter number in row %d column %d: ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    int mat3[rows][cols];
    for (int i = 0; i<rows; i++){
        for (int j = 0; j<cols; j++){
            mat3[i][j] = mat1[i][j]+mat2[1][2];
        }
    }
    for (int i = 0; i<rows; i++){
        for (int j = 0; j<cols; j++){
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
