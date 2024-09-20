#include <stdio.h>
#include <limits.h>

int maxCrossingSum(int arr[], int low, int high, int mid){
    int left_sum = INT_MIN;
    int right_sum = INT_MAX;
    int sum = 0;

    for (int i = mid; i>=low; i--){
        sum += arr[i];
        if (sum > left_sum){
            left_sum = sum;
        }
    }
    sum = 0;
    
}