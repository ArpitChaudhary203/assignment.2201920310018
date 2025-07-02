#include <stdio.h>

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = arr[0];
    int current_sum = arr[0];

    for(int i = 1; i < n; i++) {
        if(current_sum < 0)
            current_sum = arr[i];
        else
            current_sum += arr[i];
        if(current_sum > max_sum)
            max_sum = current_sum;
    }

    printf("Maximum subarray sum is: %d\n", max_sum);
    return 0;
}
