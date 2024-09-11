#include <stdio.h>
 
void swap(int* x, int* y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

void prnarr(int* ls, int n){
    for (int i=0; i<=n; i++){
        printf("%d ", ls[i]);
    }
}

void permute(int* a, int lv, int n){
    if (lv == n){
        prnarr(a, n);
        printf("\n");
    }
    else {
        for (int i = lv; i <= n; i++) {
            swap((a + lv), (a + i));
            permute(a, lv + 1, n);
            swap((a + lv), (a + i));
        }
    }
}

int main(){
    int size;
    printf("Number of Elements: ");
    scanf("%d", &size);

    int ls[size];
    printf("Enter elements sperated by space: ");
    for (int i=0; i<size; i++){
        scanf("%d", &ls[i]);
    }

    permute(ls, 0, size - 1);
    return 0;
}
