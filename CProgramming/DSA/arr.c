#include <stdio.h>
#include <stdlib.h>

int *mergearray(int c[], int a[], int b[], int topA, int topB){
	int arr_size = topA + topB + 2;
	int i, j;
	for (i = 0; i <= topA; i++) {
		*(c+i) = a[i];
	}
	for (i = 0, j = topA+1; j < arr_size && i <=topB; i++, j++) {
		*(c+j) = b[i];
	}
    return c;
}

int main(){
	int n1 = 4, n2 = 4;
	int Stack1[5] = { 1, 2, 3, 4, 5 };
	int Stack2[5] = { 6, 7, 8, 9, 10 };
    int *resStack = malloc(n1+n2);
    resStack = mergearray(resStack,Stack1,Stack2,n1,n2);
	for(int i = 0; i<n1+n2+2; i++){
        printf("%d ", *(resStack+i));
    }
	return 0;
}
