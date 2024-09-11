// to take 2-d matrix and print in reverse order
#include <stdio.h>

void printRev(int mat[][3]){
    for (int i = 2; i>=0; i--){
        for (int j = 2; j>=0; j--){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    int mat[3][3];
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            printf("Enter number in Row %d Column %d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printRev(mat);
    return 0;
}
