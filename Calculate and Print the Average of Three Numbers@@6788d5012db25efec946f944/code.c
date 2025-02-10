#include <stdio.h>

int main() {
    int a, b, c;
    double avg;

    // Read three integers
    scanf("%d %d %d", &a, &b, &c);

    // Calculate the average (convert to double for decimal precision)
    avg = (a + b + c) / 3.0;

    // Print the average with 2 decimal places
    printf("Average: %.2lf\n", avg);

    return 0;
}
