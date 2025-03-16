#include <stdio.h>

int main() {
    int num1, num2;
    
    // Read two space-separated integers
    scanf("%d %d", &num1, &num2);
    
    // Check the condition using logical AND (&&) and OR (||)
    if (!num1>0) || (!num2>0) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
