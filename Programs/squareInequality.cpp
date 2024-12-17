#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	a = a * a, b = b * b, c = c * c;
	a + b;
	if(a + b < c) {
		cout << "Yes" << '\n';
	}
	else {
		cout << "No" << '\n';
	}

	return 0;
}
