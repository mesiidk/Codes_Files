#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int result = 1;
		for (int i = 1; i <= n; i++){
			result = 1LL * result *  i % MOD;
		}
		cout << result << '\n';
	}
	return 0;
}