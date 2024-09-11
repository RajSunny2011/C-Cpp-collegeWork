#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char str[20];
};
int main(){
    union Data data;
    int i;
    for( i = 0;i < 10;i++);
    printf("%d\n",i);
    data.i = 10;
    data.f = 220.5;
    strcpy(data.str, "C");
    printf("%d", data.i);
}
