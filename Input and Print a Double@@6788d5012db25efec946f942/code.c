#include <stdio.h>

int main() {
    double num;

    // Read a double-precision floating-point number
    scanf("%lf", &num);

    // Print the entered number with 4 decimal places
    printf("You entered: %.4lf\n", num);

    return 0;
}

