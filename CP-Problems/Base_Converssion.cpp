#include <bits/stdc++.h>
using namespace std;

void decimal_to_binary(int n) {
	if(n == 0) {
		return;
	}
	decimal_to_binary(n / 2);
	cout << n % 2;
}
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		if(n == 0) {
			cout << '0' << '\n';
		}
		else {
			decimal_to_binary(n);
			cout << '\n';
		}
	}

	return 0;
}
