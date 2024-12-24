#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    int temp_a = a, temp_b = b;
    while (temp_b != 0) {
        long long remainder = temp_a % temp_b;
        temp_a = temp_b;
        temp_b = remainder;
    }
    long long gcd = temp_a;
    long long lcm = (a / gcd) * b;  
    cout << lcm << endl;

    return 0;
}
