// Swap w/o 3rd variable and using pointer
#include <stdio.h>

void swap(int *var1, int *var2){
    *var1 = *var1 + *var2;
    *var2 = *var1 - *var2;
    *var1 = *var1 - *var2;
}

int main(){
    int var1 = 1,var2 = 2;
    printf("before swap var1 = %d, var2 = %d\n",var1,var2);
    swap(&var1,&var2);
    printf("after swap var1 = %d, var2 = %d\n",var1,var2); //value changes
    return 0;
}
