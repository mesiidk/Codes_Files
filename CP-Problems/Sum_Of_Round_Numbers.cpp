#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // The number of test cases
    while (t--) {
        int n;
        cin >> n;
        vector<int> roundNumbers;
        int power = 1; // to track the power of 10 (1, 10, 100, ...)
        
        while (n > 0) {
            if (n % 10 > 0) {
                roundNumbers.push_back((n % 10) * power);
            }
            n /= 10; // remove the last digit
            power *= 10; // increase the power of 10
        }
        
        // Output the count of round numbers
        cout << roundNumbers.size() << endl;
        // Output each round number
        for (int number : roundNumbers) {
            cout << number << " ";
        }
        cout << endl;
    }
    return 0;
}