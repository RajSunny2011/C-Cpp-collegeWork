#include <stdio.h>
#include <stdlib.h> 
struct subject{
    char name[20];
    int code;
};

int main(){
    struct subject *s;
    int n;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    s = (struct subject *)malloc(n * sizeof(struct subject));
    if(s == NULL){ 
        printf("Memory allocation failed\n");
        return 0;
    }
    for (int i = 0; i < n; i++){
        printf("Enter the name of subject %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the code of subject %d: ", i + 1);
        scanf("%d", &s[i].code);
    }
    printf("The subject details are:\n");
    for (int i = 0; i < n; i++){
        printf("Subject %d: Name = %s, Code = %d\n", i + 1, s[i].name, s[i].code);
    }
    free(s);
    return 0;
}