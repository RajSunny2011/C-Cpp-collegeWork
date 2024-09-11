#include <stdio.h>
#include <string.h>

int main(){
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];
    int len, cmp;
    // Find the length of str1 using strlen
    len = strlen(str1);
    printf("The length of str1 is %d\n", len);
    // Copy str2 to str3 using strcpy
    strcpy(str3, str2);
    printf("The value of str3 is %s\n", str3);
    // Compare str1 and str2 using strcmp
    cmp = strcmp(str1, str2);
    if (cmp < 0) {
        printf("str1 is less than str2\n");
    }
    else if (cmp > 0) {
        printf("str1 is greater than str2\n");
    }
    else {
        printf("str1 is equal to str2\n");
    }
    return 0;
}