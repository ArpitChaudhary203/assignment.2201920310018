#include <stdio.h>

int main() {
    int A[] = {1,2,4,5,67,2,1,3,4,5,6,7,8,9,5,2,1,2};
    int n = sizeof(A) / sizeof(A[0]);
    int counted[n];
    for(int i = 0; i < n; i++) counted[i] = 0;

    printf("Element : Frequency\n");
    for(int i = 0; i < n; i++) {
        if(counted[i]) continue;
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(A[i] == A[j]) {
                count++;
                counted[j] = 1;
            }
        }
        printf("%d : %d\n", A[i], count);
    }
    return 0;
}
