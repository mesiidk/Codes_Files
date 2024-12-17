#include <iostream>
using namespace std;

void print_digits(int n, bool is_first = true) {
    if (n < 10) {
        cout << n;
    } else {
        print_digits(n / 10, false);  
        cout << " " << n % 10;  
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        if (N == 0) {
            cout << "0";
        } else {
            print_digits(N);
        }
        cout << endl;
    }
    return 0;
}
