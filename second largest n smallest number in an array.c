#include <stdio.h>
#include <limits.h>

int main() {
    int A[] = {1, 2, 3, 5, 6, 7, 8, 9};
    int n = sizeof(A) / sizeof(A[0]);
    int first_max = INT_MIN, second_max = INT_MIN;
    int first_min = INT_MAX, second_min = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(A[i] > first_max) {
            second_max = first_max;
            first_max = A[i];
        } else if(A[i] > second_max && A[i] != first_max) {
            second_max = A[i];
        }
        if(A[i] < first_min) {
            second_min = first_min;
            first_min = A[i];
        } else if(A[i] < second_min && A[i] != first_min) {
            second_min = A[i];
        }
    }

    printf("Second largest element: %d\n", second_max);
    printf("Second smallest element: %d\n", second_min);
    return 0;
}
