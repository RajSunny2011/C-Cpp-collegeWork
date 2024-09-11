#include <stdio.h>

int main(){
    int Rows,Columns,n;
    printf("Enter the size of the array(Rows Columns): ");
    scanf("%d %d", &Rows, &Columns);
    int mat[Rows][Columns];
    for (int i = 0; i<Rows; i++){
        for (int j = 0; j<Columns; j++){
            printf("Enter number in Row %d Column %d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i = 0; i<Rows; i++){
        for (int j = 0; j<Columns; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
