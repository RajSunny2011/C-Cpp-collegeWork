#include <stdio.h>

float triangle_area(int base, int height){
    return 0.5*base*height;
}

void swap(int *var1, int *var2){
    *var1 = *var1^*var2;
    *var2 = *var1^*var2;
    *var1 = *var1^*var2;
}

int Remainder(int a, int b){
    return a % b;
}

int main(){
    int b,h;
    printf("Enter base and heght of a triangle (base height): ");
    scanf("%d %d", &b, &h);
    float area = triangle_area(b,h);
    printf("%f\n", area);

    int u,v;
    printf("Enter 2 numbers to be swapped: ");
    scanf("%d %d", &u, &v);
    swap(&u, &v);
    printf("after swap: %d %d\n", u, v);

    int x,y;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &x, &y);
    int z = Remainder(x, y);
    printf("Remainder: %d\n", z);

    printf("\n");
    return 0;
}
