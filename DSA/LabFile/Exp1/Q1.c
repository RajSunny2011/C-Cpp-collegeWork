// 1.Find sum of all array elements using recursion
#include <stdio.h>

int sum(int Array[], int Index){
    if (Index == 0){
        return *(Array+Index);
    }
    else{
        return *(Array+Index)+sum(Array,Index-1);
    }
}

int main(){
    int s = 0;
    int ls[] = {3,1,3,4,2,12};
    int size = sizeof(ls)/sizeof(ls[0]);
    s = sum(ls,size-1);
    printf("%d",s);
    printf("\n");
    return 0;
}