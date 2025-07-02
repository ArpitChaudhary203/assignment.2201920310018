#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7}; // You can change this array to test
    int n = sizeof(A) / sizeof(A[0]);
    int isSorted = 1;

    for(int i = 1; i < n; i++) {
        if(A[i] < A[i-1]) {
            isSorted = 0;
            break;
        }
    }

    if(isSorted)
        printf("The array is sorted in ascending order.\n");
    else
        printf("The array is not sorted.\n");
    return 0;
}
