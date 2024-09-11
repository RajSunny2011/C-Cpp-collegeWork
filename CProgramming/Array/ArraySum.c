#include <stdio.h>
int main(){
    int size, s = 0;
    printf("Number of Elements: ");
    scanf("%d", &size);
    int ls[size];
    printf("Enter: ");
    for (int i=0; i<size; i++){
        scanf("%d", &ls[i]);
    }
    for (int i=0; i<size; i++){
        s = s + ls[i];
    }
    printf("%d",s);
    printf("\n");
}