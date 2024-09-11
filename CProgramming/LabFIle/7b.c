#include <stdio.h>

int main() {
    int a1[] = {1, 2, 3, 4, 5};
    int a2[5];

    int *ptr_a1 = a1;
    int *ptr_a2 = a2;

    for (int i = 0; i < 5; i++) {
        *ptr_a2 = *ptr_a1;
        ptr_a1++;
        ptr_a2++;
    }

    ptr_a1 = a1;
    ptr_a2 = a2;

    printf("Contents of a1: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr_a1);
        ptr_a1++;
    }
    printf("\n");

    printf("Contents of a2: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr_a2);
        ptr_a2++;
    }
    printf("\n");
    return 0;
}