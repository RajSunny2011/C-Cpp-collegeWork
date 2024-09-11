#include <stdio.h>

int main(){
    int *p;
    int (*ptr)[5];
    int arr[5];

    ptr = &arr;
    p = arr;

    printf("%x, %x\n", ptr, p);
    ptr++;
    p++;
    printf("%x, %x\n", ptr, p);

    return 0;
}