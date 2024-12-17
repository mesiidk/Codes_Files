#include <bits/stdc++.h>
using namespace std;
int main() {
	int a; cin >> a;
	int b; cin >> b;
	if(a <= b) {
		cout << b - a + 1 << "\n";
	}
	else {
		cout << 0 << "\n";
	}

	return 0;
}