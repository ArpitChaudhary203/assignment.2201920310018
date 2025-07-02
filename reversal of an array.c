#include <stdio.h>

int main() {
    int A[] = {2, 4, 6, 8, 10};
    int n = sizeof(A) / sizeof(A[0]);

    printf("Original array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Reverse the array
    for(int i = 0; i < n / 2; i++) {
        int temp = A[i];
        A[i] = A[n - 1 - i];
        A[n - 1 - i] = temp;
    }

    printf("Reversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
