#include <stdio.h>

// Function to check if a number is a magic number
int is_magic(int n) {
    int sum;
    while (n > 9) {
        sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return (n == 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (is_magic(n)) {
        printf("%d is a magic number.\n", n);
    } else {
        printf("%d is not a magic number.\n", n);
    }
    return 0;
}
