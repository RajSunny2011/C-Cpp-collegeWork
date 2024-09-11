#include <stdio.h>
#include <string.h>

struct employee {
    int age;
    char name[20];
    char address[50];
    int salary;
};

int main(){
    int n;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    struct employee emp[n];
    for (int i = 0; i<n; i++){
        printf("Enter Employee %d age: ",i+1);
        scanf("%d",&emp[i].age);
        printf("Enter Employee %d name: ",i+1);
        scanf("%s",&emp[i].name);
        printf("Enter Employee %d address: ",i+1);
        scanf("%s",&emp[i].address);
        printf("Enter Employee %d salary: ",i+1);
        scanf("%d",&emp[i].salary);
    }
    float s = 0;
    for (int i = 0; i<n; i++){
        s+=emp[i].salary;
    }
    float ave = s/n;
    printf("Average = %0.2f\n",ave);   
    return 0;
}