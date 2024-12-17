#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	int a[n];
	bool palindrome = 1;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int x = 0; x <= n / 2; x++) {
		if(a[x] != a[n - x - 1])
			palindrome = 0;
				break;
	}
	if(palindrome) {
		cout << "YES" << '\n';
	}
	else {
		cout << "NO" << '\n';
	}


	return 0;
}