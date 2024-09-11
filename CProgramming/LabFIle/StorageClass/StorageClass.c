#include <stdio.h>
#include <stdbool.h> 
#include "Extern.c"
extern int x;
extern void print_x();
static void print_y(){
    static int y = 0;
    printf("y = %d\n", y);
    y++;
}
void print_z(){
    auto int z = false;
    printf("z = %d\n", z);
    z++;
}
void print_w(){
    register int w = 0;
    printf("w = %d\n", w);
    w++;
}

int main(){
    x = 0;
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Print x (extern)\n");
        printf("2. Print y (static)\n");
        printf("3. Print z (auto)\n");
        printf("4. Print w (register)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                print_x();
                break;
            case 2:
                print_y();
                break;
            case 3:
                print_z();
                break;
            case 4:
                print_w();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}
