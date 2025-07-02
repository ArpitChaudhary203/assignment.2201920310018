#include <stdio.h>





int main() {
    int arr[] = {1, 20, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int inv_count = 0;

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j])
                inv_count++;
        }
    }

    printf("Number of inversions are: %d\n", inv_count);
    return 0;
}
