#include <stdio.h>
void HalfPyramid(int a){
    for (int i = 1; i<=a; i++){
        for(int j = 1; j<=i; j++){
            printf("%d",i);
        }
        printf(" \n");
    }
}

void FullPyramid(int a){
    for (int i = 1; i<=a; i++){
        for (int j = 1; j<=(a-i); j++){
            printf(" ");
        }
        for (int j = 1; j<=i+i-1; j++){
            printf("*");
        }
        printf(" \n");
    }
}

int main(){
    while(1){
        int v= 0,l= 0;
        printf("Enter 1 for numbers\nEnter 2 for asterisks\nEnter 0 to exit\nEnter: ");
        scanf("%d",&v);
        if (v == 0){
            break;
            int f;
        }
        printf("Enter length of the pyramid: ");
        scanf("%d",&l);
        if (v == 1){
            HalfPyramid(l);
        }
        if (v == 2){
            FullPyramid(l);
        }
    }
}