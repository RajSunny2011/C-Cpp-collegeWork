#include <stdio.h>

void main(){
    int x , y , z;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("x = %d, y = %d\n",x,y);
    z = x;
    x = y;
    y = z;
    printf("Now, x = %d, y = %d",x,y);
}
