#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // Take user input for the number of rows

    // Loop for each row
    for(int i = 1; i <= n; i++) {
        // Loop for printing asterisks in each row
        for(int j = 1; j <= i; j++) {
            cout << "*"; // Print asterisk
        }
        cout << endl; // Move to the next line after printing each row
    }

    return 0;
}
