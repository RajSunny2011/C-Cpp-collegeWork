#include <stdio.h>

void bubbleSort(int array[], int n) {
  int i, j, temp;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}


int main(){
    FILE *file = fopen("numbers.txt", "r");
    int array[100];
    int n = 0;
    while (fscanf(file, "%d,", &array[n]) == 1){
    n++;
    }
    fclose(file);
    bubbleSort(array, n);
    int i;
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}