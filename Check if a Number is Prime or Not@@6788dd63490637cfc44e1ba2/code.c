#include <stdio.h>

int main() {
    int a, prime = 1;  // Assume a is prime
    scanf("%d", &a);

    // Edge case: numbers less than 2 are not prime
    if (a < 2) {
        printf("Not Prime\n");
        return 0;
    }

    // Handle the special case for 2 (it is prime)
    if (a == 2) {
        printf("Prime\n");
        return 0;
    }

    // Check for divisibility from 2 to sqrt(a)
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            prime = 0;  // Not prime
            break;      // Exit the loop early if a divisor is found
        }
    }

    // If prime flag is still 1, the number is prime; otherwise, it's not prime
    if (prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
