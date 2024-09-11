// 4.Find the sum of rows and columns of matrix of given order (row x column).
#include <stdio.h>

int main(){
    int Rows,Columns,Sum_of_Row,Sum_of_Column;
    printf("Enter the size of the array(Rows Columns): ");
    scanf("%d %d", &Rows, &Columns);
    int mat[Rows][Columns];
    for (int i = 0; i<Rows; i++){
        printf("Enter numbers in Row %d: ",i+1);
        for (int j = 0; j<Columns; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i = 0; i<Rows; i++){
        for (int j = 0; j<Columns; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i<Rows; i++){
        Sum_of_Row = 0;
        for (int j = 0; j<Columns; j++){
            Sum_of_Row += mat[i][j];
        }
        printf("Sum of Row %d = %d ",i+1,Sum_of_Row);
    }
    printf("\n");
    for (int i = 0; i<Columns; i++){
        Sum_of_Row = 0;
        for (int j = 0; j<Rows; j++){
            Sum_of_Row += mat[j][i];
        }
        printf("Sum of Column %d = %d ",i+1,Sum_of_Row);
    }
    printf("\n");
}