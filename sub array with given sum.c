#include <stdio.h>

int main() {
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 33; // {Given sum}
    int curr_sum, start;
    int found = 0;

    for (int i = 0; i < n; i++) {
        curr_sum = arr[i];
        for (int j = i + 1; j <= n; j++) {
        if (curr_sum == sum) {
                printf("Subarray with given sum %d is from index %d to %d\n", sum, i, j - 1);
                found = 1;
                break;
            }
            if (curr_sum > sum || j == n)
                break;
            curr_sum += arr[j];
        }
              if (found) break;
    }
         if (!found)
        printf("No subarray with given sum found.\n");
    return 0;
}
