	#include <bits/stdc++.h>
	using namespace std;

	long long fac(int n) {
		if(n == 0) return 1;
		long long result = fac(n - 1) * n;
		return result;
	}

	int main() {
		long long n; cin >> n;
		cout << fac(n) << '\n';
		return 0;
	}