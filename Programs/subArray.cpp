#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int l = 0; l < n; l++) {
		for(int r = 0; r < l; r++) {
			cout << l << ' ';
		}
	}

	return 0;
}