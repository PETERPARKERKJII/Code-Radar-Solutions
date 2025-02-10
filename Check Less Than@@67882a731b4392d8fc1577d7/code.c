#include <stdio.h>

int main() {
    int num1, num2;

    // Read two space-separated integers
    scanf("%d %d", &num1, &num2);

    // Debugging: Print the values read
    printf("num1: %d, num2: %d\n", num1, num2);

    // Compare and print the result
    if (num1 < num2) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}

