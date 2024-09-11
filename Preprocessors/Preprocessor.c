#include <stdio.h>
#define PI 3.1415
// #undef PI
int main(){
    #ifdef PI
    printf("%0.4f",PI);
    #else
    printf("No");
    #endif
}
