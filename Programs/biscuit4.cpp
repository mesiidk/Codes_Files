#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, t; cin >> a >> b >> t;
	int totalBiscuits = 0;
	for(int i = a; i <= t + 0.5; i += a) {
		totalBiscuits += b;
	}
	cout << totalBiscuits << '\n';
	
	return 0;
}
