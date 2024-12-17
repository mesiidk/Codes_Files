#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, percent, percent2, percent3; cin >> a >> b;
	percent = a - b;
	percent2 = percent / a;
	percent3 = percent2 * 100;

	cout << percent3 << '\n';
	
	return 0;
}