#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int BinSearch(int arr[], int low, int high, int i) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == i) {
            return mid;
        } else if (i < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int LinearSearch(int arr[], int size, int n){
    for(int i = 0; i < size; i++){
        if (arr[i] == n){
            return i;
        }
    }
    return -1;
}

void fun(int MAX) {
    int *arr = (int*)malloc(MAX * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    for (int i = 0; i < MAX; i++) {
        arr[i] = i;
    }

    int ind = BinSearch(arr, 0, MAX - 1, MAX - 1);
    // int ind = LinearSearch(arr, MAX - 1, MAX - 1);
    free(arr);
}


int main(){
    struct timeval begin, end;
    FILE *f;
    f = fopen("Time.txt", "a");
    for (int MAX = 1; MAX <= 1000000001; MAX = MAX*10){
        gettimeofday(&begin, 0);
        fun(MAX);
        gettimeofday(&end, 0);
        long seconds = end.tv_sec - begin.tv_sec;
        long microseconds = end.tv_usec - begin.tv_usec;
        double elapsed = seconds + microseconds*1e-6;
        fprintf(f, "(%d, %lf),", MAX, elapsed);
        // printf("(%d,%f),", MAX, elapsed);
    }
    return 0;
}
