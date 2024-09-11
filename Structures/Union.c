#include <stdio.h>
union abc{
    int a;
    char b;
}var;
int main(){
    var.a = 66;
    printf("a = %d",var.a);
    printf("\nb = %c",var.b); //ascii 66 = B
    printf("\n");
    return 0;
}
