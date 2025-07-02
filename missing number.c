#include <stdio.h>

int main() {
    // n = 10, array missing 7
    int A[] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    int n = 10;
    int sum = 0;
    int expected_sum = n * (n + 1) / 2;

    for(int i = 0; i < n - 1; i++) {
        sum += A[i];
    }

    int missing = expected_sum - sum;
    printf("The missing number is: %d\n", missing);
    return 0;
}
