#include <stdio.h>

void main(){
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')){
        printf("'%c' is a alphabet", a);
    }
    else if(a >= '0' && a <= '9'){
        printf("'%c' is a digit", a);
    }
    else {
        printf("'%c' is a special character", a);
    }
}