#include <stdio.h>

void func();

#pragma startup func
#pragma exit func

void func(){
    printf("Func");
}

int main(){
    void func();
    printf("Main");
    printf("\n");
    return 0;
}


