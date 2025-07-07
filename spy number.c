#include <stdio.h>

int main() {
    int n, sum = 0, prod = 1, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        prod *= digit;
        temp /= 10;
    }
    if (sum == prod)
        printf("%d is a spy number.\n", n);
    else
        printf("%d is not a spy number.\n", n);
    return 0;
}
