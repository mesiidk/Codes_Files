#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	cin >> a;
	cin >> b;
	if(a < b) {
		cout << b + b - 1 << "\n";
	}
	else if(b < a) {
		cout << a + a - 1 << "\n";
	}
	else {
		cout << a + b << "\n";
	}

	return 0;
}