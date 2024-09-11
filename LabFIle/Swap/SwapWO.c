#include <stdio.h>

void main(){
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("x = %d, y = %d\n",x,y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("Now, x = %d, y = %d",x,y);
}
