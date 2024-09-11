void func(int** array, int rows, int cols){
    int i, j;
    for (i=0; i<rows; i++){
        for (j=0; j<cols; j++){
            scanf("%d",array[rows][cols]);
        }
    }
}

int main(){
    int rows, cols, i;
    int **x;
    x = malloc(rows*sizeof(*x));
    for (i=0; i<rows; i++){
        x[i] = malloc(cols*sizeof(*x[i]));
    }
    func(x, rows, cols);
    for (i=0; i<rows; i++){
        free(x[i]);
    }
    free(x);
}