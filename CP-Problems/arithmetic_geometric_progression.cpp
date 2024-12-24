#include <iostream>
using namespace std;

int main() {
    while (true) { // Loop for handling multiple inputs
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;

        // Terminate on all-zero input
        if (a1 == 0 && a2 == 0 && a3 == 0) {
            break;
        }

        if ((a2 - a1) == (a3 - a2)) {
            // Arithmetic Progression (AP)
            int d = a2 - a1;
            int a4 = a3 + d;
            cout << "AP " << a4 << endl;
        } 
        else if ((a2 % a1 == 0 && a3 % a2 == 0) && (a2 / a1 == a3 / a2)) {
            // Geometric Progression (GP)
            int r = a2 / a1;
            int a4 = a3 * r;
            cout << "GP " << a4 << endl;
        }
    }

    return 0;
}
