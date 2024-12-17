#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 10; j++) {
            cout << i << " X " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    return 0;
}
