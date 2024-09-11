// 2. Reverse a string using stack.
#include <stdio.h>

int main(){
    int size;
    printf("Number of letters: ");
    scanf("%d", &size);
    char ls[size],cpls[size];
    printf("Enter: ");
    for (int i=0; i<size; i++){
        scanf(" %c", &ls[i]);
    }
    for (int i=0; i<size; i++){
        printf("%c", ls[i]);
        cpls[i] = ls[i];
    }
    printf("\n");
	for (int i = size; i>=0; i--){
        printf("%c",ls[i]);
	}
    printf("\n");

}