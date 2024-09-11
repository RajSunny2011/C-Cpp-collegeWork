// 3.Convert uppercase string to lowercase using for loop
#include <stdio.h>

int main(){
    char s[] = "Hello";
    int size = sizeof(s)/sizeof(s[0]);
    for(int i = 0; i<size; i++){
        if (s[i]>96){
            s[i] = s[i] - 32;
        }
    }
    printf("%s",s);
}