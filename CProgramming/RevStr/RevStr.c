#include <stdio.h>
int main(){
    int size;
    printf("Number of letters: ");
    scanf("%d", &size);
    char ls[size],stack[size];
    int top = -1;
    printf("Enter: ");
    scanf("%s", &ls);
    for (int i=0; i<size; i++){
        stack[++top] = ls[i];
    }
	for (int i = top; i>=0; i--){
        printf("%c",stack[i]);
	}
    printf("\n");
}