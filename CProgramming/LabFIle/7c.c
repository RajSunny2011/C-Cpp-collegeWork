#include <stdio.h>

int main() {
    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {6, 7, 8, 9, 10};
    int a3[10]; // Declare an array to merge elements into

    int size_a1 = sizeof(a1) / sizeof(a1[0]);
    int size_a2 = sizeof(a2) / sizeof(a2[0]);
    int size_a3 = size_a1 + size_a2; // Size of the merged array

    // Copy elements from a1 to a3
    for (int i = 0; i < size_a1; i++) {
        a3[i] = a1[i];
    }

    // Copy elements from a2 to a3 after a1
    for (int i = 0; i < size_a2; i++) {
        a3[size_a1 + i] = a2[i];
    }

    // Display the contents of a3 (merged array)
    printf("Contents of a3: ");
    for (int i = 0; i < size_a3; i++) {
        printf("%d ", a3[i]);
    }
    printf("\n");

    return 0;
}