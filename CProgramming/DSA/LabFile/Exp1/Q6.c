// 6.Store ‘n’ numbers (integers or real) in an array. Conduct a linear search for a given number and report success or failure in the form of a suitable message.
#include <stdio.h>

int LinearSearch(int*array,int array_size,int value){
    for (int i = 0; i<array_size; i++)
        if (array[i]==value)
            return i;
    return -1;
}

int main(){
    int n,s;
    printf("Number of Elements: ");
    scanf("%d", &n);
    int ls[n];
    printf("Enter: ");
    for (int i=0; i<n; i++)
        scanf("%d", &ls[i]);
    printf("Enter number to search for: ");
    scanf("%d",&s);
    int x = LinearSearch(ls,n,s);
    (x == -1) ? printf("The Number does not exist in given array.") : printf("The Number exits at index: %d.",x);
    return 0;
}
