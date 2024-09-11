#include <stdio.h>

struct student{
    char name[50];
    int rollno;
};

int main(){
    struct student arr[3];
    printf("%d",sizeof(arr[1]));
}
