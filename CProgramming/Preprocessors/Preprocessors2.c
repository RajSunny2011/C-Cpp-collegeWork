#include <stdio.h>
#define Num 0
int main(){
    #if (Num == 0)
    printf("Value of Number is: %d", Num);
    #endif
    printf("\n");
    return 0;
}

