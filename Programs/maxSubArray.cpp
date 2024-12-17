#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		int maximum = -1e6;

		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int l = 0; l < n; l++) {
			for(int r = l; r < n; r++) {
				for(int i = l; i <= r; i++) {
					if(maximum < a[i]) {
						maximum = a[i];
					}
				}
				cout << maximum << ' ';
				maximum = -1e6;
			}
		}
		cout << '\n';
	}
	
	return 0;
}
