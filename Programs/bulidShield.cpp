#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c; 
    cin >> a >> b >> c;

    // Initial damage of Ebony
    int d = 0;
    int e;
    for (int x = 0; x <= floor(c / a); x++) {
        // Damage that is being dealt by ebony
        d = a * x;

        // Damage that is being dealt by ivory
        e = c - d;

        if (e >= 0 && e % b == 0) {
            int y = e / b;
            if (y >= 0) {
                cout << "YES" << endl;
                return 0; // Return 0 to indicate success
            }
        }
    }
    cout << "NO" << endl;
    return 0; // Return 0 to indicate success
}
