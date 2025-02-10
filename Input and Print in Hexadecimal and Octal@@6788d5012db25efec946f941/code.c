#include <stdio.h>

int main() {
    int num;

    // Read an integer from input
    scanf("%d", &num);

    // Print hexadecimal (uppercase) and octal representations
    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);

    return 0; // Ensure proper program termination
}
