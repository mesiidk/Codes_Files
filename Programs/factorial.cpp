#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int factorial = 1;
	for(int i = 1; i <= n; i++) {
		factorial = factorial * i;
		cout << factorial << '\n';
	}

	return 0;
}