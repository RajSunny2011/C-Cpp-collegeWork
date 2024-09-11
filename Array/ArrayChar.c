#include <stdio.h>

// int main(){

//     int size;
//     printf("Number of letters in name: ");
//     scanf("%d", &size);

//     char ls[size];
//     for (int i=0; i<size; i++){
//         printf("Enter: ");
//         scanf(" %c", &ls[i]);
//     }

//     for (int i=0; i<size; i++){
//         printf("%c", ls[i]);
//     }
    
//     printf("\n");

// }

int main() {  
    char str[8];  
    printf("Enter a String: ");  
    scanf("%s", &str);  
    printf("%s", str);  
    return 0;
}  
