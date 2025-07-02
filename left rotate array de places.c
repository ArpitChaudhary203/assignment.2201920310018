#include <stdio.h>

void leftRotate(int arr[], int n, int d) {
    d = d % n; // In case d > n
    int temp[d];
    for(int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for(int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }
    for(int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; // Number of places to rotate

    printf("Original array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    leftRotate(arr, n, d);

    printf("Array after left rotating %d places:\n", d);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
