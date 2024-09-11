#include <iostream>
#include <sys/time.h>
#include <iomanip>
using namespace std;

const int MAX = 100000;

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

void fun() {
    int arr[MAX];
    for (int i = 0; i < MAX; i++) {
        arr[i] = i;
    }
    int ind = BinSearch(arr, 0, MAX-1, MAX - 1);
    cout << "Index: " << ind << endl;
}


int main(){
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    ios_base::sync_with_stdio(false);
    fun();
    clock_gettime(CLOCK_MONOTONIC, &end);
    double time_taken;
    time_taken = (end.tv_sec - start.tv_sec) * 1e9;
    time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9;
    cout << "Time taken by program is : " << fixed
            << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}
