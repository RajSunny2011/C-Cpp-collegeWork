#include <stdio.h>

int main(){
    FILE *fp1 = fopen("file1.txt", "r");
    FILE *fp2 = fopen("file2.txt", "r");
    FILE *fp3 = fopen("file3.txt", "w");
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL){
        printf("Could not open files\n");
        return 0;
    }
    char c;
    while ((c = fgetc(fp1)) != EOF){
        fputc(c, fp3);
    }
    while ((c = fgetc(fp2)) != EOF){ 
        fputc(c, fp3);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}