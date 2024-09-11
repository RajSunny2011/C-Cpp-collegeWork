#include <stdio.h>
void reverse(char *str) {  
    if (*str == '\0') { 
        return; 
    }
    reverse(str + 1); 
    printf("%c", *str);
}
int main(){
    char str[] = "Hello World";
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    reverse(str);
    printf("\n");
    return 0;
}