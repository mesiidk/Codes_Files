#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	double ans = 1;
	for(int i = 2; i <= n; i++) {
		ans += 1.0 / i;
	}
	cout << ans << endl;
	return 0;
}