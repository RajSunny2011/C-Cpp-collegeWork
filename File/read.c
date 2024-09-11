#include <stdio.h>
int main(){
    FILE* fptr;
    char r[50];
    fptr = fopen("file.txt", "r");
    fscanf(fptr, "%s", r);
    printf("%s", r);
    fclose(fptr);
    return 0;
}