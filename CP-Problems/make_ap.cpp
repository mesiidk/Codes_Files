#include<bits/stdc++.h>
using namespace std;

void solveTest() {
    int a, b, c;
    cin >> a >> b >> c;

    if(2 * b - c > 0 && (2 * b - c) % a == 0) {
        cout << "YES\n";
        return;
    }
    
    if((a + c) % 2 == 0) {
        int new_b = (a + c) / 2;
        if(new_b > 0 && new_b % b == 0) {
            cout << "YES\n";
            return;
        }
    }
    
    if(a + 2 * (b - a) > 0 && (a + 2 * (b - a)) % c == 0) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--) {
        solveTest();
    }
    return 0;
}