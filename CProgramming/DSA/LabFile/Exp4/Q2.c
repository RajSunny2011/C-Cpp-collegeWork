// 2. Check whether the string is palindrome or not using array and Queue
#include <stdio.h>

int main(){
    int size;
    printf("Number of letters: ");
    scanf("%d", &size);
    char ls[size];
    printf("Enter: ");
    for (int i=0; i<size; i++){
        scanf(" %c", &ls[i]);
    }
    int f = 1;
    for (int i=0;i<size; i++){
        if (ls[i] != ls[size-i-1]){
            f = 0;
            break;
        }
    }
    (f == 1) ? printf("Palindrome") : printf("Not Palindrome");
    printf("\n");
    return 0;
}