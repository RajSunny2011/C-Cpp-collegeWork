#include <stdio.h>
int main(){
    int size;
    printf("Number of Elements: ");
    scanf("%d", &size);
    int ls[size];
    printf("Enter: ");
    for (int i=0; i<size; i++){
        scanf("%d", &ls[i]);
    }
    int max = ls[0];
    for (int i=1; i<size; i++){
        if (max < ls[i]){
            max = ls[i];
        }
    }
    int min = ls[0];
    for (int i=1; i<size; i++){
        if (min > ls[i]){
            min = ls[i];
        }
    }
    printf("Min: %d\nMax: %d", min, max);
    printf("\n");
}