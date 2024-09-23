#include <stdio.h>
#include <limits.h>

int maxCrossingSum(int arr[], int low, int mid, int high) {
    int left_sum = INT_MIN;
    int right_sum = INT_MIN;
    int sum = 0;

    // Sum on the left side of the mid
    for (int i = mid; i >= low; i--) {
        sum += arr[i];
        if (sum > left_sum) {
            left_sum = sum;
        }
    }

    sum = 0;
    // Sum on the right side of the mid
    for (int i = mid + 1; i <= high; i++) {
        sum += arr[i];
        if (sum > right_sum) {
            right_sum = sum;
        }
    }

    return left_sum + right_sum;
}

int maxSubArraySum(int arr[], int low, int high) {
    if (low == high) {
        return arr[low];
    }

    int mid = low + (high - low) / 2;

    int left_sum = maxSubArraySum(arr, low, mid);
    int right_sum = maxSubArraySum(arr, mid + 1, high);
    int cross_sum = maxCrossingSum(arr, low, mid, high);

    if (left_sum >= right_sum && left_sum >= cross_sum) {
        return left_sum;
    } else if (right_sum >= left_sum && right_sum >= cross_sum) {
        return right_sum;
    } else {
        return cross_sum;
    }
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = maxSubArraySum(arr, 0, n - 1);
    printf("Maximum SubArray Sum = %d\n", max_sum);

    return 0;
}
