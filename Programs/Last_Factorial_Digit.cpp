#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int fact = 1;
		if(n == 0) return 1;

		for(int i = 1; i <= n; i++) {
			fact *= i;
		}
		int result = fact % 10;
		cout << result << endl;
	}
	return 0;
}