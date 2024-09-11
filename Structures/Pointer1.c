#include <stdio.h>

struct student{
    int roll;
    int marks;
    char name[50];
};

int main(){
    struct student s;
    struct student (*p) = &s;
    printf("Enter your roll number: ");
    scanf("%d", &(*p).roll);
    printf("Enter your marks: ");
    scanf("%d", &(*p).marks);
    printf("Enter your name: ");
    scanf("%s", &(*p).name);

    printf("Student name is %s" , (*p).name);
    printf("\nStudent roll number is %d" , (*p).roll);
    printf("\nStudent scored %d", (*p).marks);
    printf("\n");
    return 0;
}