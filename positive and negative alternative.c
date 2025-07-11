#include <stdio.h>

void rearrange(int arr[], int n) {
    int pos[n], neg[n];
    // introducing pointers pos and neg to store positive and negative numbers 
    int p = 0, q = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0)
            pos[p++] = arr[i];
        else
            neg[q++] = arr[i];
    }
    int i = 0, j = 0, k = 0;
    while(i < p && j < q) {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    while(i < p) arr[k++] = pos[i++];
    while(j < q) arr[k++] = neg[j++];
}

int main() {
    int arr[] = {1, 2, 3, -4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    printf("Array after rearrangement:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
