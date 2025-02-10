#include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.14;  // Define the value of π

    // Read the radius as a floating-point number
    scanf("%f", &radius);

    // Calculate the area of the circle (π * r^2)
    area = pi * radius * radius;

    // Print the area with 2 decimal places
    printf("Area: %.2f\n", area);

    
