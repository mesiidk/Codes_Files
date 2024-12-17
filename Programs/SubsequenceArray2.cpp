#include <iostream>
using namespace std;

int main() {
    int size_a, size_b; 
    cin >> size_a >> size_b;
    
    int array_a[size_a], array_b[size_b];

    // Read elements of array A
    for (int i = 0; i < size_a; i++) {
        cin >> array_a[i];
    }

    // Read elements of array B
    for (int i = 0; i < size_b; i++) {
        cin >> array_b[i];
    }

    // Check if array B is a subsequence of array A
    int current_index_in_a = 0; // Tracks the current index in array A

    // Note that for B to be a subsequence of A, all elements of B should be present
    // in array A in correct order

    for (int i = 0; i < size_b; i++) { // Iterate through each element in array B
        bool element_found = false;

        // Find the first occurrence of array_b[i] in array_a starting from current_index_in_a
        while (current_index_in_a < size_a) {
            if (array_a[current_index_in_a] == array_b[i]) {
                element_found = true; 
                current_index_in_a++;
                break; // Element found, so break the loop
            } else {
                current_index_in_a++; // Move to the next index in array A
            }
        }

        if (!element_found) {
            cout << "NO\n"; // Element not found, array B is not a subsequence of array A
            return 0;
        }
    }

    cout << "YES\n"; // All elements of array B were found in array A in correct order
    return 0;
}
