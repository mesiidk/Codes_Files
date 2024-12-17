#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, t, sum; cin >> a >> b >> t >> sum;
	sum = 0;
	for (int i = a; i <= t; i = i + a) {
		sum = sum + b;
	}
	cout << sum << '\n';
	
	return 0;
}
