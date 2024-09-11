#include <stdio.h>
int main(){
    FILE* fptr;
    fptr = fopen("file.txt", "w");
    fprintf(fptr, "Hello");
    fclose(fptr);
    return 0;
}