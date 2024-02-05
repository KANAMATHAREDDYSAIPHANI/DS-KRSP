// Include the input/output stream header file for basic input and output operations.
#include <iostream>
// Utilize the standard namespace to simplify the use of standard library components.
using namespace std;

// Define a function named performBubbleSort that takes an array and its size as parameters.
void performBubbleSort(int arr[], int size) {
    // Outer loop: Iterate through the array from the beginning to the second-to-last element.
    for (int i = 0; i < size - 1; ++i) {
        // Inner loop: Iterate through the array from the beginning to the (size - i - 1) element.
        for (int j = 0; j < size - i - 1; ++j) {
            // Check if the current element is greater than the next element.
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the incorrect order.
                int temporary = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temporary;
            }
        }
    }
}

// Define the main function, the entry point of the program.
int main() {
    // Declare an integer array and initialize it with values.
    int arrayToSort[] = {3, 6, 1, 8, 2};
    // Calculate the size of the array by dividing the total size of the array by the size of one element.
    int arraySize = sizeof(arrayToSort) / sizeof(arrayToSort[0]);

    // Print a message indicating the unsorted array is about to be displayed.
    cout << "Unsorted array:";
    // Loop through each element of the array and print its value.
    for (int i = 0; i < arraySize; ++i) {
        cout << " " << arrayToSort[i];
    }
    // Move to the next line after printing the unsorted array.
    cout << endl;

    // Call the performBubbleSort function to sort the array.
    performBubbleSort(arrayToSort, arraySize);

    // Print a message indicating the sorted array is about to be displayed.
    cout << "Sorted array:";
    // Loop through each element of the sorted array and print its value.
    for (int i = 0; i < arraySize; ++i) {
        cout << " " << arrayToSort[i];
    }
    // Move to the next line after printing the sorted array.
    cout << endl;

    // Indicate successful program execution by returning 0.
    return 0;
}
