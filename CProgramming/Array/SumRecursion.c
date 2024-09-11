#include <stdio.h>
int s = 0;
void SumArray(int ls[],int index){
    if (index == 0){
        s += ls[0];
    }else{
        s += ls[index];
        SumArray(ls,index-1);
    }
}