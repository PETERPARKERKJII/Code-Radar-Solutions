#include <stdio.h>

int main() {
    int num;
    
    // Read the input
    scanf("%d", &num);
    
    // Check if the number is not greater than zero
    if (num <= 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
