#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void insertionSort(int array[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
    key = array[i];
    j = i - 1;
    while (j >= 0 && key < array[j]) {
        array[j + 1] = array[j];
        j = j - 1;
    }
    array[j + 1] = key;
    }
}
void selectionSort(int array[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
    min_idx = i;
    for (j = i + 1; j < n; j++) {
        if (array[j] < array[min_idx]) {
        min_idx = j;
        }
    }
    swap(&array[min_idx], &array[i]);
    }
}
int main() {
    int n1, n2, i;
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int array1[n1];
    printf("Enter the elements of the first array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &array1[i]);
    }
    insertionSort(array1, n1);
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int array2[n2];
    printf("Enter the elements of the second array: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &array2[i]);
    }
    selectionSort(array2, n2);
    FILE *file = fopen("SotredArrays.txt","w");
    if (file == NULL){
        printf("Cannot open file.\n");
    }
    for (i = 0; i < n1; i++){
        fprintf(file, "%d\n", array1[i]);
    }
    for (i = 0; i < n2; i++){
        fprintf(file, "%d\n", array2[i]);
    }
    fclose(file);
    return 0;
}
