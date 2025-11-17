// Q34: Write a program to check if a number is prime.
#include <stdio.h>
#include <math.h>

int main() {
    int n, r, i;

    printf("Enter a number=");
    scanf("%d", &n);

    if (n == 1) {
        printf("Not a prime number");
        return 0;
    }

    r = sqrt(n);

    for (i = 2; i <= r; i++) {
        if (n % i == 0) {
            printf("%d is not a prime number.", n);
            return 0;
        }
    }

    printf("%d is a prime number.", n);

    return 0;
}
