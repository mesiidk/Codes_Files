#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	int minimunNum = 1e6;

	for(int i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		if(minimunNum > a[i]) {
			minimunNum = a[i];
		}
	}
	cout << minimunNum << '\n';

	
	return 0;
}
