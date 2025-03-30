#include<stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Runs n-1 times
        for (int j = 0; j < n - i - 1; j++) { // Compares adjacent elements
            if (arr[j] > arr[j + 1]) { // Swap if the left element is bigger
                int temp = arr[j];  
                arr[j] = arr[j + 1];  
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int arr[] = {5,1,4,2,8}; // Sample array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    printf("Original array: ");
    printArray(arr, n); // Print before sorting

    bubbleSort(arr, n); // Call sorting function

    printf("Sorted array: ");
    printArray(arr, n); // Print after sorting

    return 0;
}
