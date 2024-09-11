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
    for (int i=0; i<size; i++){
        printf("%d ", ls[i]);
    }
    printf("\n");
}