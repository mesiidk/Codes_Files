#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        int a[n];
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int product = 1;
        for (int i = 0; i < n; i++) {
            product *= a[i]; 
        }
        if(product < 0) {
        	cout << "1" << endl;
        }
        else {
        	cout << "0" << endl;
        }
    }
    return 0;
}
