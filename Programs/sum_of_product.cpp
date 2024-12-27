#include <bits/stdc++.h>
using namespace std;

const int N = (int) 1e5 + 9;
int a[N];

int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        long long ans = 0; 
        int consecutive_ones = 0; 
        for (int i = 1; i <= n; i++) {
            if (a[i] == 1) {
                consecutive_ones++; 
            }
            else {
              consecutive_ones = 0;
            }
            ans += consecutive_ones;
        }
        cout << ans << endl;
    }

    return 0;
}