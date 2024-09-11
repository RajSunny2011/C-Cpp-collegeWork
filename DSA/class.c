#include <stdio.h>
int main(){
    int RollNo[3]={1,2,3};
    char name[3][20]={"Sunny Raj","Satvik","Aman"};
    for (int i=0;i<3;i++){
        printf("%s",name[i]);
        printf("\n");
    }
}