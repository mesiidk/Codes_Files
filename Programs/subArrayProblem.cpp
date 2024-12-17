#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	for(int l = 0; l < n; l++) {
		for(int r = l; r < n; r++) {
			int sum = 0;
			for(int i = l; i <= r; i++) {
				sum += a[i];
			}
			ans = max(ans, sum);
		}
	}
	cout << ans <<'\n';

	return 0;
}