#include <iostream>

int main() {
    // Define and initialize the array
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    // Initialize sum variable
    int sum = 0;

    // Iterate through the array and calculate the sum
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    // Output the result
    std::cout << "The sum of the array elements is: " << sum << std::endl;

    return 0;
}
