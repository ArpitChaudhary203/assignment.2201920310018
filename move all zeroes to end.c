#include <stdio.h>

int main() {
    int A[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(A) / sizeof(A[0]);
    int count = 0; // Count of non-zero elements

    // Traverse the array. If element is non-zero, put it at index 'count'
    for(int i = 0; i < n; i++) {
        if(A[i] != 0) {
            A[count++] = A[i];
        }
    }
    // Fill remaining positions with 0
    while(count < n) {
        A[count++] = 0;
    }

    printf("Array after moving all zeroes to end:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
