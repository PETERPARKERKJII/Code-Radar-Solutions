#include <stdio.h>
#include <math.h>

int isprimenumber(int n) {
    if (n < 2) return 0;  // Numbers less than 2 are not prime

    for (int i = 2; i <= sqrt(n); i++) {  // Loop from 2 to sqrt(n)
        if (n % i == 0) return 0;  // If divisible, it's not prime
    }

    return 1;  // If no divisors are found, it's prime
}

int main() {
    int n;
    printf("Enter number: ");  // Fixed missing semicolon
    scanf("%d", &n);

    if (isprimenumber(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}


